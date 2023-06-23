#include <iostream>
#include "CPoligono.h"
#include "CCuadrado.h"
#include "CTriangulo.h"
#include "CHexagono.h"

using namespace std;

int main()
{
  CPoligono    *palObjeto= nullptr;
  int opcion;
  double l;

         cout << "1. Triangulo \n";
         cout << "2. Cuadrado \n";
         cout << "3. Hexagono \n";
         cout << "Selecciona la opcion : ";
         cin >> opcion;

         cout << "Lado : ";
         cin >>l;
         switch( opcion)
         {
             case 1: palObjeto = new CTriangulo(l);
                     break;
             case 2: palObjeto = new CCuadrado(l);
                     break;
             case 3: palObjeto = new CHexagono(l);
         }
         cout << "El apotema : " << palObjeto->apotema() << "\n";
         cout << "El semiperimetro : " << palObjeto->semiperimetro() << "\n";
         cout << "El area es       : " << palObjeto->area();
         delete palObjeto;
         palObjeto= nullptr;

    return 0;
}



