#include "SoftwareSerial.h"

//char data;
//
//void setup() {
//   Serial.begin(9600);
//   
//   pinMode(12,OUTPUT);
//}
//
//void loop () {
////  if (Serial.available()) {
//    data = Serial.read();
////    data = 'y';
////  }
////  else { data = 'n'; }
//  if (data == 'y') {
//    digitalWrite(12,HIGH);
////    Serial.print("HIGH");
//  }
//  else {
//    digitalWrite(12,LOW);
////    Serial.print("LOW");
//  }
//}



char lightUp[1]; //Initialized variable to store recieved data

void setup() {
  pinMode(12, OUTPUT);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  //Serial.readBytes(lightUp,1);//Read the serial data and store in var
  if (Serial.read()) {
    digitalWrite(12, HIGH);
  }
  else {
    digitalWrite(12, LOW);
  }

  delay (200);
}
