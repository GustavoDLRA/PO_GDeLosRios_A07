//
// Created by gusta on 05/03/2018.
//

#ifndef PO_GDELOSRIOS_A07_FORMATOHORA_H
#define PO_GDELOSRIOS_A07_FORMATOHORA_H

#include <iostream>

class FormatoHora {
private:
    int h,m,s;

    void validarFormato();

public:
    FormatoHora();
    FormatoHora (int horas, int minutos, int segundos);
    std::string to_String();
    bool validaHS(int horas);
    bool validaMS(int minutos);

    friend FormatoHora operator+ (const FormatoHora &h1, const FormatoHora &h2);
    friend FormatoHora operator- (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator< (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator> (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator<= (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator>= (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator== (const FormatoHora &h1, const FormatoHora &h2);
    friend bool operator!= (const FormatoHora &h1, const FormatoHora &h2);
};


#endif //PO_GDELOSRIOS_A07_FORMATOHORA_H
