#include <SD.h>
#include <SPI.h>
#include <ArduinoLog.h>
#include <Tendao.h>
#include <SerialArduino.h>
#include "Config.h"

Config config = new Config(); 

SerialArduino serial;
serial.begin(config.getSerial());
File myFile;

// pinMode = Pin 53 para Mega / Pin 10 para UNO



void escreverArquivo(String pathFile){
    myFile = SD.open("usina.txt", FILE_WRITE);
    if (myFile & SD.begin()) { 
        Log.notice("Escrevendo no Arquivo .txt");
        Tendao tendao = new Tendao();
        myFile.println(tendao.movimentoServo(int post));
    }else {
        Serial.println("Erro ao Abrir Arquivo .txt");
    }
    //delete serial();
}

void lerArquivo(){
    myFile = SD.open("usina.txt");

    if (myFile & SD.begin()) {
        serial.println("Conteúdo do Arquivo:");
        while (myFile.available()) {
            serial.write(myFile.read());
        }
        myFile.close();
    }else {
        Log.errorln("Erro na leitura do Arquivo .txt");
    }
}

void setPino(String s){
    String pino = s;
}

String getPino(){
    return pino;
}


//String getUltimoArquivo(){


//}
