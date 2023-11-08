const int irLeftPin = 9;
const int irRightPin = 8;
const int motor1Pin1 = 2;
const int motor1Pin2 = 3;
const int motor2Pin1 = 4;
const int motor2Pin2 = 5;

void setup() {

  pinMode(irLeftPin, INPUT);
  pinMode(irRightPin, INPUT);

  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
}

void loop() {

  int irLeftValue = digitalRead(irLeftPin);
  int irRightValue = digitalRead(irRightPin);

  if (irLeftValue == LOW && irRightValue == LOW){
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, HIGH);
  } else if (irLeftValue == LOW && irRightValue == HIGH) {
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, HIGH);
  } else if (irLeftValue == HIGH && irRightValue == LOW) {
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);
  } else {
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);
  }
}
