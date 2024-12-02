//
// Created by L13Yoga on 01/12/2024.
//

#include "Pedido.h"

Pedido(int id, string fec){
  idPedido = id;
  Fecha = fec;
  }

void agregarProducto(Producto p){
  productos.push_back(p);
  }

double calcularTotal(){
  double total = 0;
  double precio = 0;
  for(int i = 0; i < productos.size(); i++){
    precio = productos[i].obtenerPrecio();
    total = total + precio;
  }
  }
