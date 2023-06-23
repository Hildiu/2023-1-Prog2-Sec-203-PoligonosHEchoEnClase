//
// Created by mbermejo on 23/06/2023.
//

#include "CTriangulo.h"
#include <cmath>

double CTriangulo::semiperimetro()
{
    return 3.0*lado/2.0;
}

double CTriangulo::apotema()
{
    return lado * sqrt(3)/6.0;
}