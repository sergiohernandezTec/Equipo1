//
// Created by L13Yoga on 01/12/2024.
//

#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include <vector>
#include "Produto.h"
using namespace std;

class Pedido {
private:
  int idPedido;
  string Fecha;
  double Total;
  vector<Producto> productos;
 public:
  Pedido(int id, string fec);
  void agregarProducto(Producto p);
  double calcularTotal();


};



#endif //PEDIDO_H
