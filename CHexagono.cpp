//
// Created by mbermejo on 23/06/2023.
//

#include "CHexagono.h"
#include "cmath"

double CHexagono::semiperimetro()
{
      return 3.0*lado;
}

double  CHexagono::apotema()
{
    return lado*sqrt(3)/2.0;
}