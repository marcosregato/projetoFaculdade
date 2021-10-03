#pragma once
#ifndef __ConnectionArduino__H__
#define __ConnectionArduino__H__
#include <string>


class ConnectionArduino{

public:
    ConnectionArduino(int pin, int delayTime);

    std::string getStatusConnetionArduino();
};

#endif // __ConnectionArduino__H__