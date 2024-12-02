//
// Created by Natalia on 02/12/2024.
//

#include "Perfume.h"
#include <iostream>
using namespace std;

Perfume::Perfume(double precio, string marca, string esencia, string tamaño) : Producto(precio, marca), esencia(esencia), tamaño(tamaño) {}

void Perfume::mostrarPerfume() {
    mostrarProducto();
    cout << "Escencia: " << esencia << ", Tamaño: " << tamaño << endl;
}

