//Programa final

/****************************************
 * Include Libraries
 ****************************************/
#include "UbidotsESPMQTT.h"
#include <DHT.h>
#include <DHT_U.h>

/****************************************
 * Define Constants
 ****************************************/
#define TOKEN "BBUS-Pq3DYvbUYGHyXP5Nhg3pMQwjoq1lZX" // Your Ubidots TOKEN
#define WIFINAME "LAP-JOHNCCG 7029" //Your SSID
#define WIFIPASS "calde1109" // Your Wifi Pass

Ubidots client(TOKEN);

DHT dht (D1, DHT11);

/****************************************
 * Auxiliar Functions
 ****************************************/

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i=0;i<length;i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}

/****************************************
 * Main Functions
 ****************************************/

void setup() {
  // put your setup code here, to run once:
  //client.ubidotsSetBroker("industrial.api.ubidots.com"); // Sets the broker properly for the industrial account
  client.setDebug(true); // Pass a true or false bool value to activate debug messages
  Serial.begin(115200);
  client.wifiConnection(WIFINAME, WIFIPASS);
  client.begin(callback);
  dht.begin();
  }

void loop() {
  // put your main code here, to run repeatedly:
  if(!client.connected()){
      client.reconnect();
      }
  
  float value1 = dht.readTemperature();
  float value2 = dht.readHumidity();
  client.add("temperature", value1);
  client.add("humedad", value2);
  client.ubidotsPublish("my-new-device");
  client.loop();
  delay(5000);
}