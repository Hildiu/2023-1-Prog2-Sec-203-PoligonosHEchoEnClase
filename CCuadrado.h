//
// Created by mbermejo on 23/06/2023.
//

#ifndef P1_CCUADRADO_H
#define P1_CCUADRADO_H
#include "CPoligono.h"

class CCuadrado : public CPoligono{
public:
    CCuadrado(){}
    CCuadrado(double _lado):CPoligono(_lado){}
    virtual ~CCuadrado(){}
    double semiperimetro() override;
    double apotema() override;
};


#endif //P1_CCUADRADO_H
