int buzzerPin = 12;
int frequency = 100;
int ponto = 100;
int traco = 350;
int pausa = 500;
int pausaLetra = 2000;
int pausaPalavra = 5000;


void setup() {
  pinMode(buzzerPin, OUTPUT);

}

void loop() {

  // C
  tone(buzzerPin, frequency, traco);
  delay(pausa);
  tone(buzzerPin, frequency, ponto);
  delay(pausa);
  tone(buzzerPin, frequency, traco);
  delay(pausa);
  tone(buzzerPin, frequency, ponto);

  // PAUSA
  delay(pausaLetra);

  // A

  tone(buzzerPin, frequency, ponto);
  delay(pausa);
  tone(buzzerPin, frequency, traco);

  // PAUSA
  delay(pausaLetra);

  // I

  tone(buzzerPin, frequency, ponto);
  delay(pausa);
  tone(buzzerPin, frequency, ponto);

  // PAUSA
  delay(pausaLetra);

  // O

  tone(buzzerPin, frequency, traco);
  delay(pausa);
  tone(buzzerPin, frequency, traco);
  delay(pausa);
  tone(buzzerPin, frequency, traco);

  delay(pausaPalavra);
}
