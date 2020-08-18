#include <Ultrasonic.h>

Ultrasonic ultrasonic(18, 19); // (Trig PIN,Echo PIN)

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT); in1
  pinMode(16, OUTPUT);in2
  pinMode(17, OUTPUT);in3
  pinMode(5, OUTPUT);in4
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(ultrasonic.Ranging(CM));
  if (ultrasonic.Ranging(CM) < 10)
  {
    digitalWrite(4, HIGH);
    digitalWrite(16, LOW);
    digitalWrite(17, HIGH);
    digitalWrite(5, LOW);
    delay(1000);
    digitalWrite(4, HIGH);
    digitalWrite(16, LOW);
    digitalWrite(17, LOW);
    digitalWrite(5, LOW);
    delay(1000);
  }
  else {
    digitalWrite(4, LOW);
    digitalWrite(16, HIGH);
    digitalWrite(17, LOW);
    digitalWrite(5, HIGH);
  }


}
