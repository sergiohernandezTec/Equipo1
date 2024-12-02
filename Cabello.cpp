//
// Created by Natalia on 02/12/2024.
//

#include "Cabello.h"
#include <iostream>

Cabello::Cabello(double precio, string marca, float volumen, string formula) : Producto(precio, marca), volumen(volumen), formula(formula) {}

void Cabello::mostrarCabello() {
    mostrarProducto();
    cout << "Volumen: " << volumen << "ml, Fórmula: " << formula << endl;
}
