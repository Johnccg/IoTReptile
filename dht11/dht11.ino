//Código para leer datos de DHT11

#include <DHT.h>
#include <DHT_U.h>

DHT dht (D1, DHT11);
float temp;
float hum;

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  hum = dht.readHumidity();
  temp = dht.readTemperature();

  Serial.println("Temperatura: " + String(temp) + "\nHumedad: " + String(hum));
  delay (5000);
}