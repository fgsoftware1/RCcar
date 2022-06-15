int motor1pin0 = 3;
int motor1pin1 = 5;
int speedm1 = 12;

void setup() {
  Serial.begin(9600);
  pinMode(motor1pin0, OUTPUT);
  pinMode(motor1pin1, OUTPUT);
  pinMode(speedm1, OUTPUT);

  digitalWrite(speedm1, HIGH);
}

void loop() {
  digitalWrite(motor1pin0, LOW);
  digitalWrite(motor1pin1, HIGH);
  analogWrite(speedm1, 64);
  delay(2000);
  analogWrite(speedm1, 127);
  delay(2000);
  analogWrite(speedm1, 191);
  delay(2000);
  analogWrite(speedm1, 255);
  digitalWrite(motor1pin0, HIGH);
  digitalWrite(motor1pin1, LOW);
  analogWrite(speedm1, 127);
}
