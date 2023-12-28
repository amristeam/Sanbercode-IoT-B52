const int ldrPin = A0;  // Pin analog untuk sensor LDR
const int lampuPin = D4;  // Pin digital untuk lampu (LED built-in pada board Arduino)

void setup() {
  Serial.begin(9600);  // Inisialisasi komunikasi serial
  pinMode(lampuPin, OUTPUT);  // Mengatur pin lampu sebagai output
  pinMode(ldrPin, INPUT);
}

void loop() {
  int ldrValue = analogRead(ldrPin);  // Membaca nilai dari sensor LDR
  Serial.print("Nilai LDR: ");
  Serial.println(ldrValue);

  // Menentukan ambang batas untuk menyalakan dan mematikan lampu
  int threshold = 15;

  // Membandingkan nilai LDR dengan ambang batas
  if (ldrValue < threshold) {
    digitalWrite(lampuPin, HIGH);  // Menyalakan lampu
    Serial.println("Lampu Menyala");
  } else {
    digitalWrite(lampuPin, LOW);  // Mematikan lampu
    Serial.println("Lampu Padam");
  }

  delay(1000);  // Memberi jeda 1 detik untuk stabilitas pembacaan nilai LDR
}
