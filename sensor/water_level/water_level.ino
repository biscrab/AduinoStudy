void setup() {
  Serial.begin(9600);
}

void loop() {
  int level = analogRead(A0);
  if (level)
    Serial.println(level);
}
