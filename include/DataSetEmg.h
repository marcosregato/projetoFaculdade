#pragma once
#ifndef __DataSetEmg__H__
#define __DataSetEmg__H__
#include <string>

class DataSetEmg{

    public:
        void leitorCSV(std::string pathFile);
        bool escreverCSV(std::string pathFile);
        void begin(HardwareSerial *serial);

};

#endif // __DataSetEmg__H__