#include <SD.h>
#include <SPI.h>
#include <ArduinoLog.h>
#include <Tendao.h>
#include <SerialArduino.h>

SerialArduino serial;
serial.begin(&serial);
File myFile;

// pinMode = Pin 53 para Mega / Pin 10 para UNO

DataSetEmg::DataSetEmg(int pinoSS){
    pinMode(pinoSS, OUTPUT); // Declara pinoSS como saída
    _pinoSS = pinoSS;
}

boolean setup() {

    Log.notice("Star method FULANO");
 
    //serial.begin(&serial); // Define BaundRate
    
    if (SD.begin()) { // Inicializa o SD Card
        Log.notice("SD Card pronto para uso");
        return true; 
    }else {
        Log.notice("Falha na inicialização do SD Card");
        return false;
    }
}
void escreverArquivo(){
    myFile = SD.open("usina.txt", FILE_WRITE);

    if (myFile &&  ) { 
        Log.notice("Escrevendo no Arquivo .txt");
        //Serial.println("Escrevendo no Arquivo .txt"); // Imprime na tela
        
        tendao = new Tendao();
        myFile.println(tendao.movimentoServo()); // Escreve no Arquivo
        
        //Serial.println("Terminado."); // Imprime na tela
        
        //myFile.println("Usinainfo 1, 2 ,3 ..."); // Escreve no Arquivo
        //myFile.close(); // Fecha o Arquivo após escrever
        //Serial.println("Terminado."); // Imprime na tela
        //Serial.println(" ");
    }
    else {     // Se o Arquivo não abrir
        Serial.println("Erro ao Abrir Arquivo .txt"); // Imprime na tela
    }
    ~Tendao();
}

void lerArquivo(){
    myFile = SD.open("usina.txt"); // Abre o Arquivo

    if (myFile) {
        serial.println("Conteúdo do Arquivo:"); // Imprime na tela

        while (myFile.available()) { // Exibe o conteúdo do Arquivo
        serial.write(myFile.read());
        }

        myFile.close(); // Fecha o Arquivo após ler
    }else {
        Log.errorln("Erro ao Abrir Arquivo .txt");
        Serial.println("Erro ao Abrir Arquivo .txt"); // Imprime na tela
    }
}
