//
// Created by Natalia on 02/12/2024.
//

#include "Maquillaje.h"
#include <iostream>

Maquillaje::Maquillaje(double precio, string marca, string tipo, string color, string presentacion) : Producto(precio, marca), tipo(tipo), color(color), presentacion(presentacion) {}

void Maquillaje::mostrarMaquillaje() {
    mostrarProducto();
    cout << "Tipo: " << tipo << ", Color: " << color << ", Presentacion: " << presentacion << endl;
}
