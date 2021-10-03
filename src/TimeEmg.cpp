//#include <iostream.h>
#include <ctime>
#include <Arduino.h>
#include "TimeEmg.h"
    

time_t currentTime;
struct tm *localTime;

inline String TimeEmg::getElectricImpulseMinute(){
    time(&currentTime);                   
    String horario;
    localTime = localtime( &currentTime );
    horario = String(localTime->tm_hour);
    return horario;       
}

    
