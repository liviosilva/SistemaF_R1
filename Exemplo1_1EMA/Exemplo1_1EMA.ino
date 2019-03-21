#define ledverdin 7
#define ledvermelin 8
void setup() {
  pinMode(ledverdin, OUTPUT);
  pinMode(ledvermelin, OUTPUT);

}

void loop() {
  digitalWrite(ledverdin, HIGH);
  digitalWrite(ledvermelin, LOW);
  delay(2000);
  digitalWrite(ledverdin, LOW);
  digitalWrite(ledvermelin, HIGH);
  delay(2000);
}
