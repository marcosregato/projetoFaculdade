#include <Arduino.h>
#include "DataSetEmg.h"



const int serial = 96000;
String pino = "A0";

DataSetEmg dataSetEmg = new DataSetEmg();

void setup() {
  // put your setup code here, to run once:
  dataSetEmg.escreverCSV(String pathFile);
}

void loop() {

  // put your main code here, to run repeatedly:
  Serial.println("TESTE");
  delay(1000);
}