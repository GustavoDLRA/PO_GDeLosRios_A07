#include <iostream>
#include "FormatoHora.h"

int main() {
    FormatoHora entrada(10,40,34);
    FormatoHora salida(11,30,33);
    FormatoHora r;
    bool rb;

    salida==entrada? rb=true: rb = false;
    std::cout<<"salida == entrada "
             << salida.to_String()
             <<" == "<<entrada.to_String()
             <<" resultado= "<< rb<<"\n";

    r=salida-entrada;
    std::cout<<r.to_String();
    return 0;
}