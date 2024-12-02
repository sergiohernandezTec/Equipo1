//
// Created by Natalia on 02/12/2024.
//

#ifndef CABELLO_H
#define CABELLO_H

#include "Producto.h"
#include <string>
using namespace std;

class Cabello : public Producto {
private:
    float volumen;
    string formula;

public:
    Cabello(double precio, string marca, float volumen, string formula);
    void mostrarCabello();
};

#endif //CABELLO_H

