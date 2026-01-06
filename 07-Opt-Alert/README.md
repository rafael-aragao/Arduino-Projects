# Opt-Alert – Sistema Inteligente de Alerta por Inclinação (Arduino Nano)

O **Opt-Alert** é um sistema inteligente de **monitoramento de inclinação** desenvolvido com **Arduino Nano** e sensor acelerômetro **MMA845X**, capaz de detectar inclinações perigosas e acionar **alertas visuais (LED)** e **sonoros (buzzer)** quando um limite de ângulo é ultrapassado.

---

## Descrição
O sistema utiliza um **sensor acelerômetro triaxial MMA845X**, conectado via **comunicação I2C**, para medir a inclinação do dispositivo em tempo real. A partir da leitura dos eixos X, Y e Z, o Arduino Nano calcula os ângulos de **pitch** e **roll**.

Quando a inclinação ultrapassa o valor configurado (por padrão, **45°**), o sistema aciona automaticamente um **LED** e um **buzzer**, alertando o usuário sobre uma possível situação de risco.

O projeto possui caráter **educacional, preventivo e demonstrativo**, sendo aplicável em contextos de **segurança, ergonomia, robótica e monitoramento de equipamentos**.

---

## Objetivo
- Detectar inclinação excessiva de dispositivos ou estruturas
- Emitir alertas visuais e sonoros
- Trabalhar conceitos de:
  - Acelerômetros triaxiais
  - Comunicação I2C no Arduino Nano
  - Processamento de sinais
  - Trigonometria aplicada (cálculo de ângulos)
  - Sistemas de alerta preventivo

---

## Objetivos de Desenvolvimento Sustentável (ODS)

Este projeto está alinhado aos seguintes **Objetivos de Desenvolvimento Sustentável da ONU**:

- **ODS 3 – Saúde e Bem-Estar**  
  Contribui para a prevenção de acidentes e promoção da segurança.

- **ODS 9 – Indústria, Inovação e Infraestrutura**  
  Utiliza tecnologia para monitoramento inteligente de equipamentos e estruturas.

- **ODS 11 – Cidades e Comunidades Sustentáveis**  
  Pode ser aplicado em soluções de segurança e monitoramento urbano.

---

## Componentes Utilizados
- Arduino Nano  
- Sensor Acelerômetro MMA8451 / MMA8452 / MMA8453  
- LED  
- Buzzer  
- Resistores  
- Jumpers  
- Protoboard  

---

## Esquema de Conexões

### Sensor MMA845X (I2C – Arduino Nano)
- VCC → 3.3V  
- GND → GND  
- SDA → A4  
- SCL → A5  

### Atuadores
- LED → Pino D4 (via resistor)  
- Buzzer → Pino D3  

⚠️ **Importante:** O sensor MMA845X opera em **3.3V**.  
Nunca alimente o sensor com 5V.

---

## Funcionamento
1. O Arduino Nano detecta automaticamente o endereço I2C do sensor (0x1C ou 0x1D).
2. O acelerômetro é colocado em modo ativo.
3. Os dados dos eixos X, Y e Z são lidos continuamente.
4. O sistema calcula os ângulos de **pitch** e **roll**.
5. Se o ângulo de inclinação ultrapassar o limite configurado:
   - LED é acionado
   - Buzzer é acionado
6. As informações são exibidas no **Monitor Serial**.

---

## Como Executar
1. Conecte corretamente o sensor MMA845X (3.3V)
2. Abra o arquivo `.ino` na Arduino IDE
3. Selecione:
   - Placa: **Arduino Nano**
   - Processador: **ATmega328P**
4. Conecte o Arduino Nano ao computador
5. Faça o upload do código
6. Abra o Monitor Serial (9600 baud)
7. Incline o sensor para testar o alerta

---

##  Possíveis Aplicações
- Monitoramento de postura
- Sistemas de segurança preventiva
- Estabilidade de equipamentos
- Robótica móvel
- Dispositivos vestíveis (wearables)

---

## Possíveis Melhorias
- Display OLED para exibição dos ângulos
- Registro de dados
- Comunicação sem fio (Bluetooth / Wi-Fi)
- Ajuste dinâmico do limite de inclinação
- Integração com aplicativos móveis

---

## Autor
**Rafael Aragão**  
Professor de Robótica Educacional  

🔗 LinkedIn: https://www.linkedin.com/in/aragao-rafael/

