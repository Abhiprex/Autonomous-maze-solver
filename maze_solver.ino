#include <AFMotor.h>

#define echopinl A0
#define trigpinl A1
#define echopinc A2
#define trigpinc A3
#define echopinr A4
#define trigpinr A5

AF_DCMotor motorl(1);
AF_DCMotor motorr(2);

long durationl, distancel;
long durationc, distancec;
long durationr, distancer;

void setup() {
  Serial.begin(9600);
  
  pinMode(trigpinl, OUTPUT);
  pinMode(echopinl, INPUT);
  pinMode(trigpinc, OUTPUT);
  pinMode(echopinc, INPUT);
  pinMode(trigpinr, OUTPUT);
  pinMode(echopinr, INPUT);
  
  motorl.setSpeed(250);
  motorr.setSpeed(250);
}

void loop() {
  // Left Sensor
  digitalWrite(trigpinl, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpinl, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpinl, LOW);
  durationl = pulseIn(echopinl, HIGH);
  distancel = durationl / 58.2;
  delay(50);
  Serial.print("Left: "); Serial.println(distancel);

  // Center Sensor
  digitalWrite(trigpinc, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpinc, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpinc, LOW);
  durationc = pulseIn(echopinc, HIGH);
  distancec = durationc / 58.2;
  delay(50);
  Serial.print("Center: "); Serial.println(distancec);

  // Right Sensor
  digitalWrite(trigpinr, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpinr, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpinr, LOW);
  durationr = pulseIn(echopinr, HIGH);
  distancer = durationr / 58.2;
  delay(50);
  Serial.print("Right: "); Serial.println(distancer);

  // Navigation Logic
  if (distancec > 15) {
    if (distancel > distancer) {
      leftside();
    } else {
      rightside();
    }
  } else if (distancec <= 15) {
    if (distancel > distancer) {
      left();
    } else {
      right();
    }
  }
}

void forward() {
  motorl.setSpeed(250);
  motorr.setSpeed(250);
  motorl.run(FORWARD);
  motorr.run(FORWARD);
}

void left() {
  motorl.setSpeed(150);
  motorr.setSpeed(150);
  motorl.run(BACKWARD);
  motorr.run(FORWARD);
}

void right() {
  motorl.setSpeed(150);
  motorr.setSpeed(150);
  motorl.run(FORWARD);
  motorr.run(BACKWARD);
}

void leftside() {
  motorl.setSpeed(150);
  motorr.setSpeed(250);
  motorl.run(FORWARD);
  motorr.run(FORWARD);
}

void rightside() {
  motorl.setSpeed(250);
  motorr.setSpeed(150);
  motorl.run(FORWARD);
  motorr.run(FORWARD);
}
