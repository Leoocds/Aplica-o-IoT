# Aplicação de IoT na Automação de Ambientes e Processos

# Descrição do projeto
Este projeto tem como objetivo o desenvolvimento de um sistema IoT funcional para monitoramento de consumo de água em tempo real. Utilizando um potenciômetro como sensor simulado, o valor de consumo é convertido em litros e enviado à nuvem via ThingSpeak, além de ser exibido em um display OLED SSD1603. O sistema ainda conta com LEDs indicadores de nível de consumo (baixo, médio ou alto), promovendo uma interface visual simples e eficiente.


# Objetivo 
- Criar, programar, simular e documentar um sistema IoT que:

- Leia variáveis físicas relevantes (consumo simulado com potenciômetro);

- Envie dados para a nuvem via ThingSpeak;

- Exiba os dados em gráficos públicos;

- Apresente os dados localmente por meio de LEDs e display LCD.


# Contextualização do Problema
Imagine-se uma organização que passou pela troca da empresa terceirizada que lhe fornecia serviços de limpeza e de manutenção. Essa organização, nos meses seguintes, observou uma variação nos valores das suas contas de água, em  relação ao valor médio de conta dos doze meses anteriores, em percentuais variados mas sempre significativos e para cima. Como identificar quais processos foram a causa do maior consumo evidente e quais os prestadores responsáveis por tais processos? Como combater as causas do aumento das contas de água?
É, por exemplo, para resolver situações como essa que nosso projeto foi pensado. Seja para residências, instituições de ensino, comércio, indústria, seja para quaisquer locais onde o consumo de água pode ser elevado e difícil de monitorar. Este sistema IoT permitiria que o consumo seja visualizado localmente e remotamente, ajudando na conscientização, na economia e no combate ao desperdício de água.

# Tecnologias 
- ESP32 (placa de desenvolvimento IoT com Wi-Fi)

- Sensor Simulado: Potenciômetro (representa o fluxo de água)

- Display OLED SSD1603 (exibe consumo em tempo real)

- LEDs (verde, amarelo, vermelho) (indicam nível de uso)

- ThingSpeak (plataforma de IoT na nuvem para visualização e análise de dados)

- Wokwi (ambiente de simulação online)

# Links 

- Simulação do projeto: https://wokwi.com/projects/435690547186087937
- Canal no ThingSpeak: https://thingspeak.mathworks.com/channels/3003988/charts/1?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&type=line&xaxis=Horas
- Video explicativo: https://www.youtube.com/watch?v=g0i1V5EJl4k

# Participantes

- Giovanne Brandão de Aquino 

- Leonardo de Lima Pedroso

- Ricardo Queiroz Oliani

- Sergio de Chong Wu



