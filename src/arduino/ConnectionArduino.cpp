#include <Arduino.h>
#include <map>
#include <ConnectionArduino.h>


//#include <Ethernet.h>

ConnectionArduino::ConnectionArduino(int pin, int delayTime){
        pinMode(pin, OUTPUT);
        digitalWrite(pin, HIGH);
        delay(delayTime);
        digitalWrite(pin, LOW);
        delay(delayTime);

    
}
/*
String getStatusConnetionArduino(){
        String retornoConnection;
        
        std::map<int,std::string> typeConnection;
        typeConnection.insert({1,   "SUCCESS"});
        typeConnection.insert({-1,  "TIMED_OUT"});
        typeConnection.insert({-2,  "INVALID_SERVER"});
        typeConnection.insert({-3,  "TRUNCATED"});
        typeConnection.insert({-4,  "INVALID_RESPONSE"});
        
        int connection = client.read();
    switch(connection){
        case 1:
            auto value = typeConnection.find(1);
            retornoConnection = String(value->first),value->second);
            return retornoConnection;
        case -1:
            retornoConnection = String(value->first),value->second);
            return retornoConnection;
        case -2:
            retornoConnection = String(value->first),value->second);
            return retornoConnection;
        case -3:
            retornoConnection = String(value->first),value->second);
            return retornoConnection;
        case -4:
            retornoConnection = String(value->first),value->second);
            return retornoConnection;
    }   
}*/


