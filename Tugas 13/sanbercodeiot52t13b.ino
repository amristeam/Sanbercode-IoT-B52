
const int smokePin = A0;    // Pin analog untuk sensor asap (MQ-2)
const int ledPin = D1;      // Pin digital untuk LED
const int buzzerPin = D2;   // Pin digital untuk buzzer

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int smokeValue = analogRead(smokePin);

  Serial.print("Nilai Sensor Asap: ");
  Serial.println(smokeValue);

  // Sesuaikan nilai ambang batas sesuai kebutuhan Anda
  if (smokeValue > 500) {
    Serial.println("Terdeteksi Asap!");
    activateAlarm();  // Memanggil fungsi untuk mengaktifkan alarm (buzzer dan LED)
  }

  delay(1000);  // Jeda 1 detik antara pembacaan sensor
}

void activateAlarm() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);   // Menyalakan LED
    tone(buzzerPin, 1000);         // Menghasilkan nada pada buzzer
    delay(200);                    // Jeda 200 ms
    digitalWrite(ledPin, LOW);    // Mematikan LED
    noTone(buzzerPin);             // Mematikan nada pada buzzer
    delay(200);                    // Jeda 200 ms
  }
}
