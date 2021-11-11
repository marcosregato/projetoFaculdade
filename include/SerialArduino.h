#pragma once
#ifndef SERIALARDUINO_H
#define SERIALARDUINO_H

#include <Arduino.h>

class SerialArduino{
    public:
        SerialArduino();
        ~SerialArduino();
        void begin(HardwareSerial *serial);
    
    private:
        HardwareSerial *_serial;
};



#endif //SERIALARDUINO_H