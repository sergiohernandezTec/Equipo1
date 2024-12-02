//
// Created by L13Yoga on 01/12/2024.
//

#include "Envio.h"
#include <string>
#include <iostream>
using namespace std;

Envio::Envio(double _costo, string tiempoEst){
  costo = _costo;
  tiempoEstimado = tiempoEst;
  }
double Envio::obtenerCosto(){
	return costo;
  }
void Envio::mostrarDetallesEnvio(){
	cout << "Costo: " << costo << "  " << "Tiempo Estimado: " << tiempoEstimado << endl;
  }