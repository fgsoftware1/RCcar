const int enable1 = 6;
const int input1 = 7;
const int input2 = 8;

const int enable2 = 9;
const int input3 = 10;
const int input4 = 11;

void setup() {
  pinMode(enable1, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(enable2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
}

void loop() {
  digitalWrite(enable1, HIGH);
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  digitalWrite(enable2, HIGH);
  digitalWrite(input3, LOW);
  digitalWrite(input4, HIGH);
}
