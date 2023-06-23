//
// Created by mbermejo on 23/06/2023.
//

#include "CPoligono.h"


double CPoligono::area()
{
    return semiperimetro() * apotema();
}