#include <Arduino.h>
#include <Servo.h>
#include "Tendao.h"

Servo servo;
int pos;
// construtor
//Tendao::Tendao(Servo servo_9){
//    this->servo_9 = servo_9;
//}

void movimentoServo(int post){
    servo.attach(9); 
  for (pos = 0; pos <= 180; pos += 1) {
    servo.write(pos);
    delay(15); 
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servo.write(pos);
    delay(15); 
    
  }
}