/*************************************************************

  This is a simple demo of sending and receiving some data.
  Be sure to check out other examples!
 *************************************************************/

/* Fill-in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID           "TMPL6uOL9ZA43"
#define BLYNK_TEMPLATE_NAME         "Quickstart Template"
#define BLYNK_AUTH_TOKEN            "vhBJE5M930ttaPz687-YhlZmBHQoFxTq"

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "ReadmiAmr";
char pass[] = "bismillah";

int ledPin1 = D1;
int ledPin2 = D2;
int ledPin3 = D3;
int ledPin4 = D4;

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

  Blynk.virtualWrite(V1, LOW);
  Blynk.virtualWrite(V2, LOW);
  Blynk.virtualWrite(V3, LOW);
}

BLYNK_WRITE(V1) {
  int value = param.asInt();
  digitalWrite(ledPin1, value);
}

BLYNK_WRITE(V2) {
  int value = param.asInt();
  digitalWrite(ledPin2, value);
}

BLYNK_WRITE(V3) {
  int value = param.asInt();
  digitalWrite(ledPin3, value);
}

BLYNK_WRITE(V4) {
  int value = param.asInt();
  digitalWrite(ledPin4, value);
}

BLYNK_WRITE(V0) {
  int value = param.asInt();
  digitalWrite(ledPin1, value);
  digitalWrite(ledPin2, value);
}
  
void loop() {
  Blynk.run();
}