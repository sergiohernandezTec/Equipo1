//
// Created by L13Yoga on 01/12/2024.
//

#ifndef ENVIO_H
#define ENVIO_H
#include <string>
#include <iostream>

using namespace std;

class Envio {
private:
  double costo;
  string tiempoEstimado;
  public:
    Envio(double _costo, string tiempoEst);
    double obtenerCosto();
    void mostrarDetallesEnvio();
};



#endif //ENVIO_H
