#pragma once
#ifndef TENDAO_H
#define TENDAO_H
#include <Arduino.h>
#include <Server.h>

class Tendao{

    private:
        Server servo_9;
        int pos;

    public:
        Tendao(int pos, Server servo_9);
        movimentoServo(int post);
}

#endif