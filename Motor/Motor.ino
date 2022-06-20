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
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  digitalWrite(input3, LOW);
  digitalWrite(input4, HIGH);
}
