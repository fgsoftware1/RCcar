//#include <Button.h>
#include <Ultrasonic.h>

Ultrasonic ultrassom(8, 4);
//Button button1(3);

long distancia;

void setup() {
  Serial.begin(9600);
  //button1.begin();
  //pinMode(0, OUTPUT);
}

void loop() {
  //blink
  //digitalWrite(0, HIGH);
  //delay(500);
  //digitalWrite(0, LOW);
  //delay(500);

  //button test
  //if (button1.pressed())
  //      Serial.println("Button 1 pressed");

  //ultrasonic test
  distancia = ultrassom.Ranging(CM);

  Serial.print("Distance (cm): ");
  Serial.println(distancia);

  delay(500);
}
