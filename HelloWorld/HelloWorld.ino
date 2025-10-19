#include <Servo.h>

Servo s2;

int minPos = 70;
int maxPos = 110;
int step = 1;
int waitMs = 20;

void setup() {
  s2.attach(3);     
  s2.write(90);
  delay(500);
}

void loop() {
  for (int pos = minPos; pos <= maxPos; pos += step) {
    s2.write(pos);
    delay(waitMs);
  }
  for (int pos = maxPos; pos >= minPos; pos -= step) {
    s2.write(pos);
    delay(waitMs);
  }
}