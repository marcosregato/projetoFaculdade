#include <Arduino.h>
#include <SD.h>
//#include <sys/stat.h>
#include <time.h>
#include "ModuloCartaoMemoria.h"

void connetionCardMemory(int baundRate){

}

bool createFolder(String folder){
        
        if(folder != ""){
            printf("Pasta ja existe");
            return true;
        }else{
            SD.mkdir("dados_%e_%m_%C");
            printf("Pasta foi criada");
            return true;
        }
} 

inline void writeCardMemory(String filePath){
        if(filePath != ""){
            //serial.

        }else{
            
        }
    }
