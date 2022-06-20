#include <Ultrasonic.h>

//trig, echo
Ultrasonic ultrasonic(0, 1);

const int enable1 = 6;
const int input1 = 7;
const int input2 = 8;

const int enable2 = 9;
const int input3 = 10;
const int input4 = 11;

long distance;

void setup() {
  Serial.begin(9600);
  pinMode(enable1, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(enable2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
}

void loop() {
  //ultrasonic
  distance = ultrasonic.read();

  Serial.print("Distance (cm): ");
  Serial.println(distance);

  if(distance <= 10)
    digitalWrite(enable1, LOW);
    digitalWrite(enable2, LOW);
    
  delay(500);
  //DC motors
  //digitalWrite(enable1, HIGH);
  //digitalWrite(input1, LOW);
  //digitalWrite(input2, HIGH);
  //digitalWrite(enable2, HIGH);
  //digitalWrite(input3, LOW);
  //digitalWrite(input4, HIGH);
}
