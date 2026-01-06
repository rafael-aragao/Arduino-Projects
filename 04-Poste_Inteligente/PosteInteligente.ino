/*
  Projeto: Poste Inteligente com Arduino
  Descrição: Acende a luz automaticamente quando o ambiente está escuro,
             utilizando um sensor de luminosidade (LDR).

  Objetivos de Desenvolvimento Sustentável (ODS)
  - ODS 7: Energia Acessível e Limpa
    Uso eficiente da energia ao ligar a iluminação apenas quando necessário.
  - ODS 11: Cidades e Comunidades Sustentáveis
    Aplicação de automação para infraestrutura urbana inteligente.
  - ODS 12: Consumo e Produção Responsáveis
    Redução do desperdício energético por meio da automação.

  Autor: Rafael Aragão
*/

// =======================
// DEFINIÇÃO DE PINOS
// =======================
const int PINO_SENSOR_LUZ = A0; // Pino analógico do LDR
const int PINO_LED        = 5;  // Pino do LED (simula o poste)

// =======================
// VARIÁVEIS
// =======================
int valorSensor = 0;            // Armazena leitura do sensor
int limiteEscuro = 600;         // Valor limite para considerar escuro

// =======================
// SETUP
// =======================
void setup() {
  pinMode(PINO_SENSOR_LUZ, INPUT);
  pinMode(PINO_LED, OUTPUT);

  Serial.begin(9600);
  Serial.println("Poste Inteligente iniciado...");
}

// =======================
// LOOP PRINCIPAL
// =======================
void loop() {
  // Leitura do sensor de luminosidade
  valorSensor = analogRead(PINO_SENSOR_LUZ);

  // Verifica se está escuro
  if (valorSensor >= limiteEscuro) {
    digitalWrite(PINO_LED, HIGH); // Liga o poste
    Serial.println("Ambiente escuro - Luz LIGADA");
  } else {
    digitalWrite(PINO_LED, LOW);  // Desliga o poste
    Serial.println("Ambiente claro - Luz DESLIGADA");
  }

  // Exibe o valor do sensor
  Serial.print("Valor do sensor: ");
  Serial.println(valorSensor);

  delay(500); // Aguarda meio segundo
}
