int sensorPin = 7;
int buzzerPin = 2;
int val = 0;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  tone(buzzerPin, 4186);
  val = digitalRead(sensorPin);

  if (val == HIGH) {
    digitalWrite(buzzerPin, HIGH);
  }
  else {
    digitalWrite(buzzerPin, LOW);
  }
}
