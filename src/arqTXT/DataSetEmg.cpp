#include <Arduino.h>
#include "DataSetEmg.h"

/*
void DataSetEmg::leitorCSV(std::string pathFile){

    std::ifstream leArquivo(pathFile);
    std::string linha;

    if(!leArquivo.is_open()){
        printf("Arquivo CSV nao foi encontrado");
    }
    
    //while(getline(leArquivo, linha)){

    //}

    leArquivo.close();
}*/
/*
inline bool escreverCSV(String *pathFile, String *dataEMG,String *coltime ,String *colEMG){

    std::ofstream leArquivo;
    leArquivo.open(pathFile);

    if(leArquivo){
        leArquivo << *dataEMG+"\n" << "," << *coltime << "," << *colEMG+"\n" ;
    }else{
        std::cout << "ARQUIVO NAO ENCONTRADO";
    }
    leArquivo.close();
}
*/