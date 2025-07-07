#include <WiFi.h>
#include "ThingSpeak.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// WiFi
const char* ssid = "Wokwi-GUEST";
const char* password = "";

// ThingSpeak
WiFiClient client;
unsigned long channelID = 3003988;
const char* writeAPIKey = "GWCR62SDK4BWR2VP";

// Sensor e LEDs
const int pot1 = 34;
const int led1 = 5;
const int led2 = 4;
const int led3 = 2;

// OLED 128x64
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1  // Reset não usado

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // Inicializa I2C com os pinos padrão do ESP32 (SDA=21, SCL=22)
  Wire.begin(21, 22);

  // Inicializa OLED
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Falha ao iniciar o OLED"));
    while(true);
  }
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(2);
  display.setCursor(0, 0);
  display.print("Monitor de Agua");
  display.display();
  delay(1500);
  display.clearDisplay();

  // Conecta WiFi
  WiFi.begin(ssid, password);
  Serial.print("Conectando ao WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi conectado!");

  ThingSpeak.begin(client);
}

void loop() {
  int valorBruto = analogRead(pot1);
  float consumoAgua = (valorBruto / 4095.0) * 100.0;

  Serial.print("Consumo de Água (litros): ");
  Serial.println(consumoAgua, 2);

  // Controla LEDs
  if (consumoAgua < 30) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } else if (consumoAgua < 70) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }

  // Atualiza display OLED
  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(0, 0);
  display.print("Consumo:");
  display.setTextSize(3);
  display.setCursor(0, 30);
  display.print(consumoAgua, 2);
  display.print(" L");
  display.display();

  // Envia dados para ThingSpeak
  ThingSpeak.setField(1, consumoAgua);
  int status = ThingSpeak.writeFields(channelID, writeAPIKey);

  if (status == 200) {
    Serial.println("Dados enviados com sucesso!");
  } else {
    Serial.print("Falha ao enviar dados. Código: ");
    Serial.println(status);
  }

  delay(15000);
}
