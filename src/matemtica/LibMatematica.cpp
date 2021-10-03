//#include <iostream.h>
#include <math.h>
#include "LibMatematica.h"


float LibMatematica::formulaCoulomb(float constante, float g1, float g2, float distancia){
    float resul = constante * g1 * g2 / pow(distancia,2);
    return resul;
}

/**
 * @brief a soma da força vetorial sobre um corpo produzirá 
 *        uma aceleração desse corpo diretamente proporcional 
 *        ao seu momento linear.
 * 
 * @return float 
 */
float LibMatematica::segundaLeiNewton(float massa, float aceleracao){
    return massa * aceleracao;
}
