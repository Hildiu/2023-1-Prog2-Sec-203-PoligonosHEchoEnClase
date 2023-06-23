//
// Created by mbermejo on 23/06/2023.
//

#ifndef P1_CHEXAGONO_H
#define P1_CHEXAGONO_H
#include "CPoligono.h"

class CHexagono : public CPoligono{
public:
    CHexagono(){}
    CHexagono(double _lado):CPoligono(_lado){}
    virtual ~CHexagono(){}
    double semiperimetro() override;
    double apotema() override;
};


#endif //P1_CHEXAGONO_H
