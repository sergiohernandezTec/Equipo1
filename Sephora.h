//
// Created by Nat on 02/12/2024.
//

#ifndef SEPHORA_H
#define SEPHORA_H

#include "Cliente.h"
#include "Producto.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Sephora {
private:
    Cliente cliente;
    vector<Producto> productos;

public:
    Sephora();
    void mostrarMenu();
    void verProductos();
    void hacerPedido();
    void ejecutar();
};

#endif // SEPHORA_H
