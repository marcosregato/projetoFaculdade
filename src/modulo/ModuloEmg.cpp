#include <stdio.h>
#include "ModuloEmg.h"
#include <Arduino.h>

using namespace std;

String getSinalEMG(){
    
    // read the input on analog pin 0:
    int sensorValue = analogRead(A0);
    // Converta a leitura analógica (que vai de 0 a 1023) em uma tensão (0 a 5V): 
    float voltage = sensorValue * (5.0 / 1023.0);
    String volt = String(voltage);
    return volt;

}