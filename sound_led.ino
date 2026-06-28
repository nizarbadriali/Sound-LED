const int soundPin = 10;
const int ledPin   = 6;
const int holdTime = 3000;

void setup() {
  pinMode(soundPin, INPUT);
  pinMode(ledPin,   OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(soundPin) == HIGH) {
    Serial.println("Sound detected — LED on!");
    digitalWrite(ledPin, HIGH);
    delay(holdTime);
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
