int relePin = 14;
unsigned long delayUnaSemana = 7 * 24 * 60 * 60 * 1000; //Genera el delay de una semana

void setup() {
  pinMode(relePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(relePin, LOW);
  Serial.println("Prendido");
  delay(delayUnaSemana);
  digitalWrite(relePin, HIGH);
  Serial.println("Apagado");
  delay(5000);
}
