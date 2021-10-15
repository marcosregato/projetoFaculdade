#pragma once
#ifndef MODULOCARTAOMEMORIA_H
#define MODULOCARTAOMEMORIA_H
#include <Arduino.h>

class CartaoMemoriaArduino{

    private:
        int baundRate;
    public:
        connetionCardMemory(int baundRate);
        bool createFolder(String folder);
        inline writeCardMemory(String filePath);

};
#endif