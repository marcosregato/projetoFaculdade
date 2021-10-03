#pragma once
#ifndef __ModuloCartaoMemoria__H__
#define __ModuloCartaoMemoria__H___
#include <Arduino.h>

class CartaoMemoriaArduino{

    public:
        void connetionCardMemory();
        bool createFolder(String folder);
        void writeCardMemory(String filePath);

};
#endif