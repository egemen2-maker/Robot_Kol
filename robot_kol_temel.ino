#include <Servo.h>

Servo omuz;
Servo dirsek;
Servo bilek;

void setup() {
  Serial.begin(9600);
  omuz.attach(9);
  dirsek.attach(10);
  bilek.attach(11);
  
  omuz.write(90);
  dirsek.write(90);
  bilek.write(90);
  delay(1000);
}

void loop() {
  omuz.write(45);
  Serial.println("Omuz: 45 derece");
  delay(500);
  
  dirsek.write(135);
  Serial.println("Dirsek: 135 derece");
  delay(500);
  
  bilek.write(60);
  Serial.println("Bilek: 60 derece");
  delay(500);
  
  omuz.write(90);
  dirsek.write(90);
  bilek.write(90);
  Serial.println("--- Başa dön ---");
  delay(1000);
}