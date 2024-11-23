//
// Created by Nat on 30/11/2024.
//

#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(string _Nombre, string _Correo) {
    Nombre = _Nombre;
    Correo = _Correo;
}

void Cliente::mostrarCliente() {
    cout << "Nombre: " << Nombre << endl;
    cout << "Correo: " << Correo << endl;
    cout << "Direcciones: " << endl;
    for (size_t k = 0; k < Direcciones.size(); k++) {
        Direcciones[k].mostrarDireccion();
    }

    cout << "Metodos de pago: " << endl;
    for (size_t k = 0; k < MetodosPago.size(); k++) {
        MetodosPago[k].mostrarMetodoPago();
    }
}
