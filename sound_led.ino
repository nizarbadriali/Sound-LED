const int trigPin   = 8;
const int echoPin   = 10;
const int ledPin    = 6;
const int soundPin  = 7;

const int triggerDistance = 20;
const int holdTime        = 3000;
const int listenWindow    = 5000;

bool armed = false;
unsigned long armedTime = 0;

void setup() {
  pinMode(trigPin,  OUTPUT);
  pinMode(echoPin,  INPUT);
  pinMode(ledPin,   OUTPUT);
  pinMode(soundPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int distance = getDistance();

  if (distance < triggerDistance && !armed) {
    armed = true;
    armedTime = millis();
    Serial.println("Armed — waiting for sound...");
  }

  if (armed) {
    if (digitalRead(soundPin) == HIGH) {
      Serial.println("Sound detected — LED on!");
      digitalWrite(ledPin, HIGH);
      delay(holdTime);
      digitalWrite(ledPin, LOW);
      armed = false;
    }

    if (millis() - armedTime > listenWindow) {
      armed = false;
      Serial.println("Timed out — disarmed.");
    }
  }

  delay(100);
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2;
}
