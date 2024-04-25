// C++ code
//
#include <Servo.h>

int sensorValue = 0;

int outputValue = 0;

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  servo_9.attach(9, 500, 2500);
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(A0);
  outputValue = map(sensorValue, 0, 1023, 0, 180);
  if (outputValue <= 60) {
    servo_9.write(outputValue);
    digitalWrite(8, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }
  if (outputValue > 60 && outputValue <= 120) {
    servo_9.write(outputValue);
    digitalWrite(8, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }
  if (outputValue > 120 && outputValue <= 180) {
    servo_9.write(outputValue);
    digitalWrite(8, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}