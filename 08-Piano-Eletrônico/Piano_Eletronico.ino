/*
  Projeto: Piano Eletrônico com Arduino
  Descrição: Piano simples onde cada botão aciona
             uma nota musical através de um buzzer.

  🌍 Objetivos de Desenvolvimento Sustentável (ODS)
  - ODS 4: Educação de Qualidade
  - ODS 9: Indústria, Inovação e Infraestrutura

  Autor: Rafael Aragão
*/

// =======================
// DEFINIÇÃO DOS PINOS
// =======================

// Botões
#define botao1 7
#define botao2 8
#define botao3 9
#define botao4 10
#define botao5 11
#define botao6 12
#define botao7 13

// Buzzer
#define buzzer 6

// =======================
// NOTAS MUSICAIS (Hz)
// =======================
#define C 262  // Dó
#define D 294  // Ré
#define E 330  // Mi
#define F 349  // Fá
#define G 392  // Sol
#define A 440  // Lá
#define B 493  // Si

// =======================
// SETUP
// =======================
void setup() {
  // Configura os botões como entrada
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  pinMode(botao5, INPUT);
  pinMode(botao6, INPUT);
  pinMode(botao7, INPUT);

  // Configura o buzzer como saída
  pinMode(buzzer, OUTPUT);
}

// =======================
// LOOP PRINCIPAL
// =======================
void loop() {

  // Leitura do estado dos botões
  int status1 = digitalRead(botao1);
  int status2 = digitalRead(botao2);
  int status3 = digitalRead(botao3);
  int status4 = digitalRead(botao4);
  int status5 = digitalRead(botao5);
  int status6 = digitalRead(botao6);
  int status7 = digitalRead(botao7);

  // Botão 1 - Dó
  if (status1 == HIGH) {
    tone(buzzer, C);
    delay(200);
    noTone(buzzer);
  }

  // Botão 2 - Ré
  if (status2 == HIGH) {
    tone(buzzer, D);
    delay(200);
    noTone(buzzer);
  }

  // Botão 3 - Mi
  if (status3 == HIGH) {
    tone(buzzer, E);
    delay(200);
    noTone(buzzer);
  }

  // Botão 4 - Fá
  if (status4 == HIGH) {
    tone(buzzer, F);
    delay(200);
    noTone(buzzer);
  }

  // Botão 5 - Sol
  if (status5 == HIGH) {
    tone(buzzer, G);
    delay(200);
    noTone(buzzer);
  }

  // Botão 6 - Lá
  if (status6 == HIGH) {
    tone(buzzer, A);
    delay(200);
    noTone(buzzer);
  }

  // Botão 7 - Si
  if (status7 == HIGH) {
    tone(buzzer, B);
    delay(200);
    noTone(buzzer);
  }
}
