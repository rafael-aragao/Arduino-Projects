# Estacionamento Inteligente com Arduino

Projeto de **estacionamento inteligente** que controla automaticamente a **entrada e saída de veículos**, exibindo em tempo real a **quantidade de vagas disponíveis**, utilizando Arduino, sensores ultrassônicos, servomotores e display LCD.

---

## Descrição
O sistema utiliza **sensores ultrassônicos** para detectar a presença de veículos na entrada e na saída do estacionamento. Ao identificar um veículo, o Arduino aciona automaticamente uma **cancela controlada por servomotor** e atualiza o número de vagas disponíveis em um **display LCD**.

O projeto tem caráter **educacional e demonstrativo**, sendo ideal para estudos de **automação urbana, robótica educacional e cidades inteligentes**.

---

## Objetivo
- Automatizar o controle de acesso a estacionamentos
- Monitorar vagas disponíveis em tempo real
- Trabalhar conceitos de:
  - Sensores de distância
  - Atuadores (servomotores)
  - Estruturas condicionais
  - Automação e mobilidade urbana
- Aplicar tecnologia em soluções para cidades inteligentes

---

## Objetivos de Desenvolvimento Sustentável (ODS)

Este projeto está alinhado aos seguintes **Objetivos de Desenvolvimento Sustentável da ONU**:

- **ODS 9 – Indústria, Inovação e Infraestrutura**  
  Promove o uso da tecnologia para modernizar sistemas urbanos e de mobilidade.

- **ODS 11 – Cidades e Comunidades Sustentáveis**  
  Contribui para organização urbana, melhor uso dos espaços e redução de congestionamentos.

- **ODS 12 – Consumo e Produção Responsáveis**  
  Otimiza o uso das vagas disponíveis, reduzindo circulação desnecessária de veículos.

---

## Componentes Utilizados
- Arduino UNO  
- 2 Sensores Ultrassônicos (HC-SR04)  
- 2 Servomotores  
- Display LCD 16x2  
- Potenciômetro (para ajuste do LCD)  
- Jumpers  
- Protoboard  

---

## Esquema de Conexões

### Sensores Ultrassônicos
**Entrada**
- TRIG → Pino 6  
- ECHO → Pino 7  

**Saída**
- TRIG → Pino 8  
- ECHO → Pino 13  

### Servomotores
- Servo Entrada → Pino 9  
- Servo Saída → Pino 10  

### Display LCD (16x2)
- RS → 12  
- EN → 11  
- D4 → 5  
- D5 → 4  
- D6 → 3  
- D7 → 2  

---

## Funcionamento
1. O sistema monitora continuamente os sensores de entrada e saída.
2. Ao detectar um veículo na entrada, verifica se há vagas disponíveis.
3. Caso haja vagas, a cancela de entrada é aberta e o número de vagas é reduzido.
4. Ao detectar um veículo na saída, a cancela é aberta e o número de vagas é incrementado.
5. O display LCD exibe em tempo real a quantidade de vagas disponíveis.
6. Quando não há vagas, o sistema indica **estacionamento lotado**.

---

## Como Executar
1. Abra o arquivo `.ino` na Arduino IDE
2. Conecte o Arduino ao computador
3. Selecione a placa e a porta corretas
4. Faça o upload do código
5. Alimente o circuito
6. Observe o funcionamento pelo LCD e Monitor Serial

---

## Possíveis Melhorias
- Integração com aplicativo (IoT)
- Registro de dados de entrada e saída
- Display OLED ou painel LED externo
- Leitura por RFID ou QR Code
- Integração com sistema de pagamento

---

## Autor
**Rafael Aragão**  
Professor de Robótica Educacional  

🔗 LinkedIn: https://www.linkedin.com/in/aragao-rafael/

