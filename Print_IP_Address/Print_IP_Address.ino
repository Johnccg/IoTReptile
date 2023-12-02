//Conecta a internet y muestra dirección IP

#include "ESP8266WiFi.h"

// WiFi parameters to be configured
const char* ssid = "LAP-JOHNCCG 7029"; // Write here your router's username
const char* password = "calde1109"; // Write here your router's passward

void setup(void)
{ 
  Serial.begin(115200);
  WiFi.disconnect();
  delay(50);
  //WiFi.mode(WIFI_STA);
  // Connect to WiFi
  WiFi.begin(ssid, password);

  // while wifi not connected yet, print '.'
  // then after it connected, get out of the loop
  while (WiFi.status() != WL_CONNECTED) {
     delay(500);
     Serial.print(".");
  }
  //print a new line, then print WiFi connected and the IP address
  Serial.println("");
  Serial.println("WiFi connected");
  // Print the IP address
  Serial.println(WiFi.localIP());

}
void loop() {
  // Nothing
}
