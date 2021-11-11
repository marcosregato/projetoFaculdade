#pragma once
#ifndef __Config__H__
#define __Config__H__
#include <string>

class Config{

    private:
        int serial = 9600;
        String pino;

    public:
        void setPino(String p){
            pino = p;
        }

        String getPino(){
            return pino;
        }

        int getSerial(){
            return serial;
        }

};

#endif // __Config__H__