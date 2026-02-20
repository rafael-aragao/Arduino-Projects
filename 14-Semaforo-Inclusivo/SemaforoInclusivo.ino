/*
  -------------------------------------------------------
  Projeto: Semáforo Inclusivo com Sinal Sonoro
  Descrição: Sistema de semáforo para pedestres que utiliza
             sinalização luminosa (LEDs) e sinal sonoro
             (buzzer) para auxiliar pessoas com deficiência
             visual na travessia de ruas.

  Autor: Rafael Aragão
  -------------------------------------------------------
*/

// =======================
// DEFINIÇÃO DE PINOS
// =======================
const int ledVermelho = 8;   // LED vermelho (pare)
const int ledAmarelo  = 9;   // LED amarelo (atenção)
const int ledVerde    = 10;  // LED verde (atravessar)
const int buzzerPin   = 11;  // Buzzer para sinal sonoro

// =======================
// SETUP
// =======================
void setup() {

  // Configura os LEDs como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  // Configura o buzzer como saída
  pinMode(buzzerPin, OUTPUT);

  // Inicia a comunicação serial
  Serial.begin(9600);
  Serial.println("Semaforo Inclusivo iniciado");
}

// =======================
// LOOP PRINCIPAL
// =======================
void loop() {

  // =======================
  // VERMELHO – PARE
  // =======================
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(buzzerPin, LOW);

  Serial.println("Sinal Vermelho - Pare");
  delay(5000);

  // =======================
  // AMARELO – ATENÇÃO
  // =======================
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);

  Serial.println("Sinal Amarelo - Atencao");

  // Bipes lentos
  for (int i = 0; i < 5; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(200);
    digitalWrite(buzzerPin, LOW);
    delay(800);
  }

  digitalWrite(ledAmarelo, LOW);

  // =======================
  // VERDE – ATRAVESSAR
  // =======================
  digitalWrite(ledVerde, HIGH);
  Serial.println("Sinal Verde - Pode atravessar");

  // Bipes rápidos
  for (int i = 0; i < 10; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(200);
  }

  digitalWrite(ledVerde, LOW);
}