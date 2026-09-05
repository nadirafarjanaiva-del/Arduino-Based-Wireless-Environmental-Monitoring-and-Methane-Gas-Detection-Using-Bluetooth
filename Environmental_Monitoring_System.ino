#include <SoftwareSerial.h>

int sensorPin = A0;      
int ledPin = 9;        
int buzzerPin = 10;      
int threshold = 070;      // Gas detection threshold
int sensorValue = 0;

SoftwareSerial bluetooth(2, 3); // RX, TX for Bluetooth (HC-06)

void setup() {
  Serial.begin(9600);    
  bluetooth.begin(9600);    

  pinMode(sensorPin, INPUT);    
  pinMode(ledPin, OUTPUT);      
  pinMode(buzzerPin, OUTPUT);   

  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {

  sensorValue = analogRead(sensorPin);
  Serial.print("Methane Level: ");
  Serial.println(sensorValue);
  bluetooth.print("Methane Level: ");
  bluetooth.println(sensorValue);

  if (sensorValue > threshold) {
    Serial.println("WARNING! High Methane Level Detected!");
    bluetooth.println("WARNING! High Methane Level Detected!");

    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);

  } 
  else {

    Serial.println("Methane Level is Normal");
    bluetooth.println("Methane Level is Normal");

    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  delay(1000);
}
