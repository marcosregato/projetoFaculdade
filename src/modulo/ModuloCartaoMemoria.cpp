#include <Arduino.h>
#include <SD.h>
#include <time.h>
#include "ModuloCartaoMemoria.h"

void connetionCardMemory(int baundRate){

}

bool createFolder(String folder){
        
        if(folder != ""){
            printf("Pasta ja existe");
            return true;
        }else{
            SD.mkdir((char *)"dados");//"dados_%e_%m_%c");
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
