# Poste Inteligente com Arduino

Projeto de automação que simula um **poste de iluminação pública inteligente**,
capaz de ligar automaticamente a luz quando o ambiente fica escuro, utilizando
um **sensor de luminosidade (LDR)**.

---

### Objetivos de Desenvolvimento Sustentável (ODS)

Este projeto está alinhado aos seguintes **Objetivos de Desenvolvimento Sustentável da ONU**:

### ODS 7 – Energia Acessível e Limpa
Promove o uso eficiente de energia elétrica ao acionar a iluminação pública
apenas quando necessário, reduzindo o consumo e o desperdício energético.

### ODS 11 – Cidades e Comunidades Sustentáveis
Contribui para o desenvolvimento de **cidades inteligentes**, utilizando
automação para melhorar a infraestrutura urbana, segurança e sustentabilidade.

### ODS 12 – Consumo e Produção Responsáveis
Estimula práticas de consumo consciente de energia por meio da automação
e do uso racional dos recursos naturais.

---

## Descrição
O sistema realiza a leitura da luminosidade do ambiente através de um LDR.
Quando a luz ambiente está abaixo de um valor definido, o Arduino aciona
automaticamente um LED, representando a lâmpada do poste.

---

## Objetivo
- Automatizar o acionamento de iluminação
- Economizar energia
- Trabalhar conceitos de:
  - Sensores analógicos
  - Estruturas condicionais
  - Automação urbana
  - Cidades inteligentes

---

## Componentes Utilizados
- Arduino UNO
- Sensor LDR
- Resistor (10kΩ)
- LED
- Resistor (220Ω)
- Jumpers

---

## Esquema de Ligação
### LDR
- Um terminal → 5V
- Outro terminal → A0 + resistor 10kΩ para GND

### LED
- Ânodo → Pino 5 (via resistor 220Ω)
- Cátodo → GND

---

## Funcionamento
1. O Arduino lê o valor do sensor de luminosidade.
2. Compara com um valor limite configurável.
3. Se estiver escuro, liga o LED.
4. Se estiver claro, desliga o LED.
5. O valor do sensor é exibido no Monitor Serial.

---

## Como Executar
1. Abra o arquivo `.ino` na Arduino IDE
2. Conecte o Arduino ao computador
3. Selecione a placa e a porta
4. Faça o upload do código
5. Observe o funcionamento

---

## Autor
**Rafael Aragão**  
Professor de Robótica Educacional  

🔗 LinkedIn: https://www.linkedin.com/in/aragao-rafael/

