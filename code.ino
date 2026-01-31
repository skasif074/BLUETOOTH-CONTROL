char cmd;

// Motor pins
int IN1 = 2;   // Left motor
int IN2 = 3;
int IN3 = 4;   // Right motor
int IN4 = 5;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600); // HC-05 default baud
}

void loop() {
  if (Serial.available() > 0) {
    cmd = Serial.read();

    switch (cmd) {

      case 'F':   // FORWARD (fixed)
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);   // Left motor forward
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);   // Right motor forward
        break;

      case 'B':   // BACKWARD (fixed)
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);    // Left motor backward
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);    // Right motor backward
        break;

      case 'L':   // LEFT TURN (pivot)
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);   // Left motor forward
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);    // Right motor backward
        break;

      case 'R':   // RIGHT TURN (pivot)
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);    // Left motor backward
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);   // Right motor forward
        break;

      case 'S':   // STOP
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        break;
    }
  }
}
