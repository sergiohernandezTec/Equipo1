//
// Created by Natalia on 02/12/2024.
//

#ifndef PERFUME_H
#define PERFUME_H
#include <string>
#include "Producto.h"
using namespace std;

class Perfume : public Producto {
private:
    string esencia;
    string tamaño;
public:
    Perfume(double precio, string marca, string esencia, string tamaño);
    void mostrarPerfume();
};

#endif //PERFUME_H

