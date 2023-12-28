const int sensorPin = A0;  // Pin analog untuk sensor asap
const int threshold = 500;  // Ambang batas deteksi asap

void setup() {
  Serial.begin(9600);  // Inisialisasi komunikasi serial
}

void loop() {
  // Membaca nilai dari sensor asap
  int smokeValue = analogRead(sensorPin);

  // Membandingkan nilai sensor dengan ambang batas
  if (smokeValue > threshold) {
    // Jika terdeteksi asap, tampilkan pesan di Serial Monitor
    Serial.println("Terdeteksi Asap");
  }

  delay(1000);  // Jeda 1 detik untuk stabilitas pembacaan nilai sensor
}
