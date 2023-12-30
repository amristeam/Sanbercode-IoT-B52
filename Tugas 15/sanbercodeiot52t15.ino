#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "8719ce5c040a4bd88b8d6698bbd515e5";  // Ganti dengan token otentikasi Blynk Anda
char ssid[] = "RedmiAmr";        // Ganti dengan nama WiFi Anda
char pass[] = "bismillah";    // Ganti dengan kata sandi WiFi Anda

int smokePin = A0;  // Pin analog untuk sensor asap (MQ-2)
int buzzerPin = D2; // Pin digital untuk buzzer

int dangerThreshold = 500;  // Nilai ambang batas bahaya asap atau gas

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);

  pinMode(smokePin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Blynk.virtualWrite(V0, dangerThreshold);
}

void loop() {
  Blynk.run();

  int smokeValue = analogRead(smokePin);

  Serial.print("Nilai Sensor Asap: ");
  Serial.println(smokeValue);

  Blynk.virtualWrite(V1, smokeValue);

  if (smokeValue > dangerThreshold) {
    activateBuzzer();
  } else {
    deactivateBuzzer();
  }

  delay(1000);  // Jeda 1 detik antara pembacaan sensor
}

void activateBuzzer() {
  digitalWrite(buzzerPin, HIGH);
  Blynk.virtualWrite(V2, HIGH);
}

void deactivateBuzzer() {
  digitalWrite(buzzerPin, LOW);
  Blynk.virtualWrite(V2, LOW);
}
