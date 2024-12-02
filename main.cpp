#include <iostream>
#include <string>
#include <vector>
#include "Sephora.h"

using namespace std;

int main() {
    Sephora tienda;
    tienda.ejecutar();
    return 0;
}

// Estructura para productos
struct Producto {
    string tipo;
    string marca;
    int cantidad;
};

// Función para mostrar el menú principal
void mostrarMenu() {
    cout << "======= Bienvenido a Sephora =======\n";
    cout << "1. Iniciar Sesión\n";
    cout << "2. Ver Productos\n";
    cout << "3. Hacer Pedido\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opción: ";
}

// Función para iniciar sesión
void iniciarSesion(Cliente &cliente) {
    cout << "Ingrese su nombre: ";
    cin.ignore();
    getline(cin, cliente.nombre);
    cout << "Ingrese su dirección: ";
    getline(cin, cliente.direccion);
    cout << "Ingrese su método de pago: ";
    getline(cin, cliente.metodoPago);
    cout << "Inicio de sesión exitoso. Bienvenido, " << cliente.nombre << "!\n";
}

// Función para mostrar productos
void verProductos(vector<Producto> &productos) {
    cout << "====== Productos Disponibles ======\n";
    for (size_t i = 0; i < productos.size(); i++) {
        cout << i + 1 << ". " << productos[i].tipo << " - " << productos[i].marca
             << " (" << productos[i].cantidad << " disponibles)\n";
    }
}

// Función para realizar un pedido
void hacerPedido(Cliente &cliente, vector<Producto> &productos) {
    if (cliente.nombre.empty()) {
        cout << "Debe iniciar sesión antes de hacer un pedido.\n";
        return;
    }
    verProductos(productos);
    cout << "Seleccione el número del producto que desea comprar: ";
    int opcion;
    cin >> opcion;

    if (opcion > 0 && opcion <= productos.size()) {
        cout << "¿Cuántas unidades desea comprar? ";
        int cantidad;
        cin >> cantidad;

        if (cantidad <= productos[opcion - 1].cantidad) {
            productos[opcion - 1].cantidad -= cantidad;
            cout << "Pedido realizado con éxito!\n";
            cout << "Producto: " << productos[opcion - 1].tipo << " - " << productos[opcion - 1].marca << "\n";
            cout << "Cantidad: " << cantidad << "\n";
            cout << "Dirección de envío: " << cliente.direccion << "\n";
            cout << "Método de pago: " << cliente.metodoPago << "\n";
        } else {
            cout << "No hay suficientes unidades disponibles.\n";
        }
    } else {
        cout << "Opción no válida.\n";
    }
}

// Función principal
int main() {
    Cliente cliente;
    vector<Producto> productos = {
        {"Maquillaje", "Dior", 3},
        {"Perfume", "MAC", 1},
        {"Cuidado del cabello", "Rare Beauty", 2}
    };

    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                iniciarSesion(cliente);
                break;
            case 2:
                verProductos(productos);
                break;
            case 3:
                hacerPedido(cliente, productos);
                break;
            case 4:
                cout << "Gracias por visitar Sephora. ¡Hasta pronto!\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}