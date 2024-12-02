#include <iostream>
#include <string>
#include <vector>
#include "Sephora.h"
#include "Pedido.h"
#include "Cliente.h"
#include "Direccion.h"
#include "MetodoPago.h"

using namespace std;

int main()
{
    int opcion;
    do
    {
        cout << "Menu principal" << endl;
        cout << "1. Crear cliente" << endl;
        cout << "2. Ver productos" << endl;
        cout << "3. Hacer pedido" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: "; cin >> opcion;
        if (opcion == 1)
        {
            string nom;
            string cor;
            string TipoTarjeta;
            int NumeroTarjeta;
            string calle;
            string num;
            string ciudad;
            string estado;
            string cp;

            cout << "Ingresa el nombre: ";
            cin.ignore();
            getline(cin, nom);

            cout << "Ingresa el correo: "; cin >> cor;
            Cliente(nom,cor);

            cout << "Tipo tarjeta: "; cin >> TipoTarjeta;
            cout << "Numero tarjeta: "; cin >> NumeroTarjeta;
            MetodoPago(TipoTarjeta, NumeroTarjeta);

            cout << "Calle: "; cin >> calle;
            cout << "Numero calle: "; cin >> num;
            cout << "Estado: "; cin >> estado;
            cout << "Codigo Postal: "; cin >> cp;
            Direccion(calle, num, estado, cp);

        }


    } while (opcion > 0);
};