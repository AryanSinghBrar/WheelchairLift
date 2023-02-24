// Define the pin to which the motor is connected
int motorPin = 9;

// Define the direction pins
int dir1 = 4;
int dir2 = 5;

void setup() {
  // Set the motor pin as an output
  pinMode(motorPin, OUTPUT);

  // Set the direction pins as outputs
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);

  // Set the initial direction to forward
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
}

void loop() {
  // Spin the motor forward
  analogWrite(motorPin, 255); // 255 is the maximum value for analogWrite

  // Wait for a moment
  delay(1000);

  // Reverse the motor direction
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);

  // Spin the motor in reverse
  analogWrite(motorPin, 255);

  // Wait for a moment
  delay(1000);

  // Set the direction back to forward
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
}
