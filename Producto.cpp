//
// Created by Natalia on 02/12/2024.
//

#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto(double precio, string marca): precio(precio), marca(marca) {}

void Producto::agregarComentario(Comentario comentario) {
    comentarios.push_back(comentario);
}

double Producto::obtenerPrecio() {
    return precio;
}

void Producto::mostrarProducto() {
    cout << "Marca: " << marca << ", Precio: $" << precio << endl;
}

