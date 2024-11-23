//
// Created by Nat on 30/11/2024.
//

#ifndef METODOPAGO_H
#define METODOPAGO_H
#include <string>
using namespace std;


class MetodoPago {
private:
    string TipoTarjeta;
    int NumeroTarjeta;
public:
    MetodoPago(string _TipoTarjeta, int _NumeroTarjeta);
    string obtenerTipoPago();
    void actualizarNum(int NuevoNumTarjeta);
    void mostrarMetodoPago();

};

#endif //METODOPAGO_H
