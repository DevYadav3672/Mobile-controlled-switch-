// 1.include library
#include<ESP8266WiFi.h>

// 2.define necessary data
#define BLYNK_TEMPLATE_NAME "Bulb"
#define BLYNK_TEMPLATE_ID "TMPL3KaCCAjtJ"
#define BLYNK_AUTH_TOKEN "iuqIsQpA-ZCWGfVYqfK6lLHyIt0B5cjz"
#define wifissid "Dev"
#define wifipass "00000000"
#define txpin 5   //D1

#include<BlynkSimpleEsp8266.h>

// 3.define variables
int value;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN,wifissid,wifipass);
  pinMode(txpin,OUTPUT);
}

void loop() {
  Blynk.run();
 // Serial.print(value);

  digitalWrite(txpin,value);
  // delay(1000);
}

// 3. recive data from Blynk
BLYNK_WRITE(V0){
  value = param.asInt();
  //Serial.print(value);

}
