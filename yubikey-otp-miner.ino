#define YUBIPIN 4
#define TX_LED 1

void setup() {
  pinMode(TX_LED, OUTPUT);
  pinMode(YUBIPIN, OUTPUT);
  digitalWrite(YUBIPIN, 0);
}

void loop() {
  digitalWrite(TX_LED, HIGH); //LED on
  pinMode(YUBIPIN, INPUT);
  delay(550);
  pinMode(YUBIPIN, OUTPUT);
  digitalWrite(YUBIPIN, 0);
  digitalWrite(TX_LED, LOW); //LED off
  delay(550);
}

