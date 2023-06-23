//
// Created by mbermejo on 23/06/2023.
//

#ifndef P1_CPOLIGONO_H
#define P1_CPOLIGONO_H


class CPoligono {
protected:
    double lado;
public:
    CPoligono(){}
    CPoligono(double _lado):lado(_lado){}
    virtual ~CPoligono(){}

    virtual double semiperimetro() = 0;   //-- es un metodo virtual puro
    virtual double apotema()=0;  //-- es unmetodo virtual puro
    double area();
    void setLado(double _lado) { lado = _lado;}
    double getLado(){return lado;}
};


#endif //P1_CPOLIGONO_H
