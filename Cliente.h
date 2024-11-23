//
// Created by Nat on 30/11/2024.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>
#include "MetodoPago.h"
#include "Direccion.h"
using namespace std;

class Cliente {
private:
    string Nombre;
    string Correo;
    vector<Direccion> Direcciones;
    vector<MetodoPago> MetodosPago;
public:
    Cliente(string _Nombre, string _Correo);
    void mostrarCliente();

};



#endif //CLIENTE_H
