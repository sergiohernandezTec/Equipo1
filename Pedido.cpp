//
// Created by L13Yoga on 01/12/2024.
//

#include "Pedido.h"
#include <string>
using namespace std;

Pedido::Pedido(string fec){
  Fecha = fec;
  }

void Pedido::agregarProducto(Producto p){
  productos.push_back(p);
  }

double Pedido::calcularTotal(){
  double total = 0;
  double precio = 0;
  for(int i = 0; i < productos.size(); i++){
    precio = productos[i].obtenerPrecio();
    total = total + precio;
  }
  }
