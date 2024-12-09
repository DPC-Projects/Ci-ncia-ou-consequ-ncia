// Definição dos pinos
const int botao1 = 2;  // Botão para Lampada 1
const int botao2 = 3;  // Botão para Lampada 2
const int lampada1 = 10;  // Lâmpada 1
const int lampada2 = 11;  // Lâmpada 2

void setup() {
  // Configura os pinos
  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);
  pinMode(lampada1, OUTPUT);
  pinMode(lampada2, OUTPUT);
}

void loop() {
  // Verifica se o Botão 1 foi pressionado e se a Lampada 2 está apagada
  if (digitalRead(botao1) == LOW && digitalRead(lampada2) == LOW) {
    digitalWrite(lampada1, HIGH); // Liga Lampada 1
    delay(2000); // Mantém a lampada ligada por 2 segundos
    digitalWrite(lampada1, LOW); // Desliga Lampada 1
  }

  // Verifica se o Botão 2 foi pressionado e se a Lampada 1 está apagada
  if (digitalRead(botao2) == LOW && digitalRead(lampada1) == LOW) {
    digitalWrite(lampada2, HIGH); // Liga Lampada 2
    delay(2000); // Mantém a lampada ligada por 2 segundos
    digitalWrite(lampada2, LOW); // Desliga Lampada 2
  }
}
