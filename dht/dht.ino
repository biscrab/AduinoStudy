#include <DHT11.h>
DHT11 dht(A1);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int i;
  float humi, temp;
  if((i = dht.read(humi, temp)) == 0) {
    Serial.print("humi:");
    Serial.println(humi);
    Serial.print("temp:");
    Serial.println(temp);  
  }
  delay(200);
}
