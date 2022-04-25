int pot = PA0;
int led = PA3;

void setup() {
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int valeurpot = analogRead(pot);
  int valeurled = map(valeurpot, 0, 4096, 0, 255);
  analogWrite(led, valeurled);
}
