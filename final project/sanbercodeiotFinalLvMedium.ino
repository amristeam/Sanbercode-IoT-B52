#define BLYNK_TEMPLATE_ID "TMPL6zeiaMIHY"
#define BLYNK_TEMPLATE_NAME "saklar lampu"
#define BLYNK_AUTH_TOKEN "tK0TI5nMKQdrkthVoIjXDv8T6sp4XTgz"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//Enter your blynk auth token


char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "Modekerja";//Enter your WIFI name

char pass[] = "semangat";//Enter your WIFI password

 

BLYNK_WRITE(V0) {

  digitalWrite(D1, param.asInt());

}
BLYNK_WRITE(V1) {
  digitalWrite(D3, param.asInt());
}
BLYNK_WRITE(V2) {

  digitalWrite(D5, param.asInt());
}


const int ldrPin = A0;  // Pin analog untuk sensor LDR
const int lampuPin = D8;  // Pin digital untuk lampu (LED built-in pada board Arduino)

void setup() {
Serial.begin(9600);
  pinMode(D1, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(lampuPin, OUTPUT);
  pinMode(ldrPin, INPUT);

  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);

}

void loop() {

  int analogSensor = analogRead(ldrPin);

  Blynk.virtualWrite(V3,analogSensor);

  Serial.print("Nilai LDR: ");

  Serial.println(analogSensor);

  // Menentukan ambang batas untuk menyalakan dan mematikan lampu
  int threshold = 15;

  // Membandingkan nilai LDR dengan ambang batas
  if (analogSensor < threshold) {
    digitalWrite(lampuPin, HIGH);  // Menyalakan lampu
    Serial.println("Lampu Menyala");
  } else {
    digitalWrite(lampuPin, LOW);  // Mematikan lampu
    Serial.println("Lampu Padam");
  }

  delay(1000);  // Memberi jeda 1 detik untuk stabilitas pembacaan nilai LDR

  Blynk.run();

}