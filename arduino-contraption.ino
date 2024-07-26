#include <Servo.h>
String TrashType;
Servo myServo;
Servo myServo2;
int ServoPos = 0;
int ServoPos2 = 0;
void setup() {
  Serial.begin(115200);
  Serial.setTimeout(1);
  myServo.attach(13);
  myServo2.attach(12);
}

void loop() {
  TrashType = Serial.readString();

if (TrashType == "Recycling") {
  for (ServoPos = 0; ServoPos <= 200; ServoPos += 5) {
  myServo.write(ServoPos);
  delay(10);
  }
  delay(500);
  for (ServoPos = 180; ServoPos >= 0; ServoPos -= 5) {
  myServo.write(ServoPos);
  delay(10);
  }
  TrashType = "Nothing";
  }
if (TrashType == "Garbage") {
    for (ServoPos2 = 20; ServoPos2 <= 200; ServoPos2 += 5) {
  myServo2.write(ServoPos2);
  delay(10);
  }
  delay(500);
    for (ServoPos2 = 200; ServoPos2 >= 0; ServoPos2 -= 5) {
  myServo.write(ServoPos2);
  delay(10);
    }
  }
}
