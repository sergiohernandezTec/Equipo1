//
// Created by Natalia on 02/12/2024.
//

#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto(int id, double precio, string marca): id(id), precio(precio), marca(marca) {}

void Producto::agregarComentario(Comentario comentario) {
    comentarios.push_back(comentario);
}

double Producto::obtenerPrecio() {
    return precio;
}

void Producto::mostrarProducto() {
    cout << "ID: " << id << ", Marca: " << marca << ", Precio: $" << precio << endl;
}

