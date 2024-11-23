//
// Created by Nat on 30/11/2024.
//

#include "MetodoPago.h"
#include <iostream>
using namespace std;

MetodoPago::MetodoPago(string _TipoTarjeta, int _NumeroTarjeta) {
    TipoTarjeta = _TipoTarjeta;
    NumeroTarjeta = _NumeroTarjeta;
}

string MetodoPago::obtenerTipoPago() {
    return TipoTarjeta;
}

void MetodoPago::actualizarNum(int NuevoNumTarjeta) {
    NumeroTarjeta = NuevoNumTarjeta;
    cout << "Numero de tarjeta actualizado correctamente." << endl;
}

void MetodoPago::mostrarMetodoPago() {
    cout << "Tipo de tarjeta: " << TipoTarjeta << endl;
    cout << "Numero de tarjeta: " << NumeroTarjeta << endl;
}
