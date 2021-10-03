#pragma once
#ifndef __LibMatematica__H__
#define __LibMatematica__H__

class LibMatematica{

    
    public:
        /**
        * @brief Calculo usando da formula de Coulomb
        * 
        * @param constante 
        * @param g1 
        * @param g2 
        * @param distancia 
        * @return float 
        */
        float formulaCoulomb(float constante, float g1, float g2, float distancia);
        
        float segundaLeiNewton(float massa, float aceleracao);

};


#endif 