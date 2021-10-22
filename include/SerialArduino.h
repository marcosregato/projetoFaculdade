#pragma once
#ifndef SERIALARDUINO_H
#define SERIALARDUINO_H

class SerialArduino{
    public:
        void begin(HardwareSerial *serial);
    
    private:
        HardwareSerial *_serial;
}

#endif SERIALARDUINO_H