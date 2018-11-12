#include "SoftwareSerial.h"
////
////SoftwareSerial
//void setup() {
//   Serial.begin(9600);
//}
//
//void loop () {
//  while (Serial.available() > 0) {
//    Serial.print('y');
//  }
//}


char lightUp[1] = {'y'}; //String data
int sensorPin = A0;
int threshold = 30;
int sensorValue = 0;
int test = 0;

void setup() {
  // Begin the Serial at 9600 Baud
  Serial.begin(9600);
}

void loop() {
  test = analogRead(sensorPin);
  if (test < threshold) {
    Serial.write('y');
    Serial.println('a');
    Serial.println(test);
    
    
    delay(1000);
  }
}
