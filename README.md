# Aplicação IoT

# Descrição do projeto
Este projeto tem como objetivo o desenvolvimento de um sistema IoT funcional para monitoramento de consumo de água em tempo real. Utilizando um potenciômetro como sensor simulado, o valor de consumo é convertido em litros e enviado à nuvem via ThingSpeak, além de ser exibido em um display LCD 16x2. O sistema ainda conta com LEDs indicadores de nível de consumo (baixo, médio ou alto), promovendo uma interface visual simples e eficiente.


# Objetivo 
- Criar, programar, simular e documentar um sistema IoT que:

- Leia variáveis físicas relevantes (consumo simulado com potenciômetro);

- Envie dados para a nuvem via ThingSpeak;

- Exiba os dados em gráficos públicos;

- Apresente os dados localmente por meio de LEDs e display LCD.


# Contextualização / Problema Real
Em residências, empresas ou instituições com alta rotatividade de usuários, como escolas ou condomínios, o consumo de água pode ser elevado e pouco controlado. A falta de monitoramento em tempo real impede ações de economia, além de dificultar a identificação de vazamentos ou picos anormais. 
Este sistema simulado representa uma solução viável e acessível para:

- Visualizar o consumo de forma local (display + LEDs);

- Enviar dados para a nuvem para registro e análise histórica;

- Conscientizar usuários sobre o nível de consumo.

# Tecnologias Utilizadas
- ESP32 (placa de desenvolvimento IoT com Wi-Fi)

- Sensor Simulado: Potenciômetro (representa o fluxo de água)

- Display LCD 16x2 I2C (exibe consumo em tempo real)

- LEDs (verde, amarelo, vermelho) (indicam nível de uso)

- ThingSpeak (plataforma de IoT na nuvem para visualização e análise de dados)

- Wokwi (ambiente de simulação online)


# Classificação do Nível de Consumo (LEDs)
Verde: < 30 litros → Consumo baixo

Amarelo: 30 a 70 litros → Consumo moderado

Vermelho: > 70 litros → Consumo alto



