//
// Created by Nat on 02/12/2024.
//

#ifndef SEPHORA_H
#define SEPHORA_H

#include <vector>
#include <string>
#include "Producto.h"
#include "Cliente.h"
#include "Pedido.h"
using namespace std;

class Sephora {
private:
    vector<Producto> Productos;
    vector<Cliente> Clientes;
    vector<Pedido> Pedidos;

public:
    Sephora();
    void agregarCliente(Cliente cliente);
    void agregarPedido(Pedido pedido);
    void agregarProducto(Producto producto);
    void listarProductos();
    void mostrarClientes();

};

#endif // SEPHORA_H