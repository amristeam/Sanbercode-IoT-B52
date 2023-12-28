int ledK = D2;
int ledH = D0;
int ledM = D4;


void setup() {
  // put your setup code here, to run once:
 pinMode(ledM, OUTPUT);
 pinMode(ledK, OUTPUT);
pinMode(ledH, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledM, HIGH);   // Menyalakan Lampu, Memberikan nilai High
  digitalWrite(ledH, LOW);
  delay(6000);               // Nyalakan Lampu selama 6 detik

digitalWrite(ledK, HIGH);
digitalWrite(ledM, LOW);
  delay(2000);               // Nyalakan Lampu selama 2 detik

digitalWrite(ledH, HIGH);
digitalWrite(ledK, LOW);
  delay(5000);               // Nyalakan Lampu selama 5 detik}
}