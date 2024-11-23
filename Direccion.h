//
// Created by Nat on 30/11/2024.
//

#ifndef DIRECCION_H
#define DIRECCION_H
#include <string>
using namespace std;

class Direccion {
private:
    string calle;
    string num;
    string ciudad;
    string estado;
    string cp;
public:
    Direccion(string _calle, string _num, string _ciudad, string _estado, string _cp);
    string direccionCompleta();
    void actualizarDireccion();
    void mostrarDireccion();

};



#endif //DIRECCION_H

