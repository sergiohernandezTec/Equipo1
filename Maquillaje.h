//
// Created by Natalia on 02/12/2024.
//

#ifndef MAQUILLAJE_H
#define MAQUILLAJE_H

#include "Producto.h"

class Maquillaje : public Producto {
private:
    string tipo;
    string color;
    string presentacion;

public:
    Maquillaje(double precio, string marca, string tipo, string color, string presentacion);
    void mostrarMaquillaje();
};

#endif //MAQUILLAJE_H

