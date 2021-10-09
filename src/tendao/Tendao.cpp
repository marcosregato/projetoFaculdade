#include <Arduino.h>
#include <Servo.h>
#include "Tendao.h"

Servo servo_9;
int pos;
// construtor
Tendao::Tendao(int pos, Servo servo_9){
    this->pos = pos;
    this->servo_9 = servo_9;

}

/*void setup(){
  servo_9.attach(9, 500, 2500);
}*/

void movimentoServo(){
    servo_9.attach(9, 500, 2500);
    // varre o servo de 0 a 180 graus em etapas
    // de 1 grau 
  for (pos = 0; pos <= 180; pos += 1) {
    // diga ao servo para ir para a posição na variável 'pos' 
    servo_9.write(pos);
    // espera 15 ms para o servo alcançar a posição
    delay(15); // Aguarde 15 milissegundos (s) 
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Aguarde 15 milissegundos (s) 
    
  }
}