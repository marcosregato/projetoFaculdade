#pragma once
#ifndef TENDAO_H
#define TENDAO_H
#include <Arduino.h>
#include <Server.h>

class Tendao{

    private:
        Servo servo_9;
        int pos;

    public:
        Tendao(int pos, Servo servo_9);
        movimentoServo();
};

#endif