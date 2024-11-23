//
// Created by Nat on 30/11/2024.
//

#include "Direccion.h"
#include <iostream>
using namespace std;

Direccion::Direccion(string _calle, string _num, string _ciudad, string _estado, string _cp) {
    calle = _calle;
    num = _num;
    ciudad = _ciudad;
    estado = _estado;
    cp = _cp;
}

void Direccion::mostrarDireccion() {
    cout << "Calle: " << calle << ", Numero: " << num << ", Ciudad: " << ciudad
         << ", Estado: " << estado << ", Codigo Postal: " << cp << endl;
}

string Direccion::direccionCompleta() {
    return calle + " #" + num + ", " + ciudad + ", " + estado + ", CP: " + cp;
}

void Direccion::actualizarDireccion() {
    cout << "Actualizar direccion:" << endl;
    cout << "Calle: ";
    cin.ignore();
    getline(cin, calle);
    cout << "Numero: ";
    cin >> num;
    cout << "Ciudad: ";
    cin.ignore();
    getline(cin, ciudad);
    cout << "Estado: ";
    getline(cin, estado);
    cout << "Codigo postal: ";
    cin >> cp;
}

