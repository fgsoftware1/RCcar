#include <Ultrasonic.h>
               //trig, echo
Ultrasonic ultrassom(8, 4);

long distancia;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distance = ultrasonic.read();

  Serial.print("Distance (cm): ");
  Serial.println(distance);

  delay(500);
}
