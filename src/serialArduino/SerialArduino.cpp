#include "SerialArduino.h"

SerialArduino::SerialArduino(){
    _serial = NULL;
}
void SerialArduino::begin(HardwareSerial *serial){
    _serial = serial;
    _serial->begin(9600);

}