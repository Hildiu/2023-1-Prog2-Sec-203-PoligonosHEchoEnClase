//
// Created by mbermejo on 23/06/2023.
//

#ifndef P1_CTRIANGULO_H
#define P1_CTRIANGULO_H

#include "CPoligono.h"

class CTriangulo : public CPoligono {
public:
    CTriangulo(){}
    CTriangulo(double _lado):CPoligono(_lado){}
    virtual ~CTriangulo(){}
    double semiperimetro() override;
    double apotema() override;
};


#endif //P1_CTRIANGULO_H
