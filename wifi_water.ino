#include <ESP8266WiFi.h>
#include <PubSubClient.h>

int RelayPin = 5; 

/*
 *  This code switches a relay connected to port 5 (GPIO5) on an ESP8266.
 *
 *  It will connect to MQTT and listens on topic demo/smart/socket/1/relay
 *  for 'on' and 'off' commands. Every 60 seconds, it will publishes te current
 */



int RelayPin = 5;    // RELAY connected to digital pin 5

const char* ssid     = "_homezone24_";
const char* password = "";

//change with your MQTT server IP address
const char* mqtt_server = "192.168.178.35";


WiFiClient espClient;
PubSubClient client(espClient);

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(RelayPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("loop loop");
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(RelayPin, HIGH);
  delay(4000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(RelayPin, LOW);
  delay(4000);                       // wait for a second
}
