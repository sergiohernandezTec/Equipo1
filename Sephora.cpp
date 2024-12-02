
// Created by Nat on 02/12/2024.
//

#include "Sephora.h"
#include <iostream>
using namespace std;

Sephora::Sephora() {

}

void Sephora::agregarCliente(const Cliente& cliente) {
    Clientes.push_back(cliente);
}

void Sephora::agregarPedido(const Pedido& pedido) {
    Pedidos.push_back(pedido);
}

void Sephora::listarProductos() const {
    for (const auto& producto : Productos) {
        cout << producto.toString() << endl;
    }
}