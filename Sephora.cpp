
// Created by Nat on 02/12/2024.
//

#include "Sephora.h"
#include <iostream>
using namespace std;

Sephora::Sephora() {

}

void Sephora::agregarCliente(Cliente cliente) {
    Clientes.push_back(cliente);
}

void Sephora::agregarPedido(Pedido pedido) {
    Pedidos.push_back(pedido);
}
void Sephora::agregarProducto(Producto producto) {
  Productos.push_back(producto);
}

void Sephora::listarProductos() {
  for (int k=0 ; k<Productos.size() ; k++){
    Productos[k].mostrarProducto();
    }
}
void Sephora::mostrarClientes()  {
   int i = 1;
  for (int k=0 ; k<Clientes.size() ; k++){
    cout << i << ". "; Clientes[k].mostrarCliente();
    i = i + 1;
    }
}