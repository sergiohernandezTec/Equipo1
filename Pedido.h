//
// Created by L13Yoga on 01/12/2024.
//

#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include <vector>
#include "Producto.h"
#include "Sephora.h"
using namespace std;

class Pedido {
private:
  string Fecha;
  double Total;
  vector<Producto> productos;
 public:
  Pedido(string fec);
  void agregarProducto(Producto p);
  double calcularTotal();


};



#endif //PEDIDO_H
