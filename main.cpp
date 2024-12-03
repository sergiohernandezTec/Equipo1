#include <iostream>
#include <string>
#include <vector>
#include "Sephora.h"
#include "Pedido.h"
#include "Cliente.h"
#include "Direccion.h"
#include "MetodoPago.h"
#include "Producto.h"

using namespace std;

int main()
{
    Sephora sephora;
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
            Cliente cliente(nom,cor);
            sephora.agregarCliente(cliente)

            cout << "Tipo tarjeta: "; cin >> TipoTarjeta;
            cout << "Numero tarjeta: "; cin >> NumeroTarjeta;
            MetodoPago metodo_pago(TipoTarjeta, NumeroTarjeta);

            cout << "Calle: "; cin >> calle;
            cout << "Numero calle: "; cin >> num;
            cout << "Ciudad: "; cin >> ciudad;
            cout << "Estado: "; cin >> estado;
            cout << "Codigo Postal: "; cin >> cp;
            Direccion direccion(calle, num, ciudad, estado, cp);

        }
        if (opcion == 2)
        {
            Producto producto(01,3000,"MAC");
            sephora.listarProductos();
        }
        if (opcion == 3)
        {
            int cliente;
            int codigo;
            string fecha;
            cout << "Iniciar sesion" << endl;
            sephora.mostrarClientes();
            cout << "Cliente: "; cin >> cliente;
            cout << "Fecha: "; cin >> fecha;
            Pedido pedido(fecha);
            sephora.agregarPedido(pedido);
            cout << "Para agregar productos elija el numero de producto que quiere" << endl;
            while (codigo != 0)
            {
                cout << "Producto: "; cin >> codigo;
                for (const auto& producto : sephora.Productos){
                    if (producto.id == codigo){
                        pedido.agregarProducto(producto);
                    }
                }
            }
        }


    } while (opcion != 0);
};