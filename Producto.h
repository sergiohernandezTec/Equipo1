//
// Created by Natalia on 02/12/2024.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <vector>
#include "Comentario.h"
using namespace std;

class Producto {
protected:
    double precio;
    string marca;
    int id;
    vector<Comentario> comentarios;

public:
    Producto(int id, double precio, string marca);
    void agregarComentario(Comentario comentario);
    double obtenerPrecio();
    void mostrarProducto();
};

#endif //PRODUCTO_H
