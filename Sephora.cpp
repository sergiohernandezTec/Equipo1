//
// Created by Nat on 02/12/2024.
//

#include "Sephora.h"
#include <iostream>
using namespace std;

Sephora::Sephora() {
    // Inicializar la lista de productos
    productos.push_back(Producto("Maquillaje", "Dior", 3));
    productos.push_back(Producto("Perfume", "MAC", 1));
    productos.push_back(Producto("Cuidado del cabello", "Rare Beauty", 2));
}

void Sephora::mostrarMenu() {
    cout << "======= Bienvenido a Sephora =======\n";
    cout << "1. Iniciar Sesión\n";
    cout << "2. Ver Productos\n";
    cout << "3. Hacer Pedido\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opción: ";
}

void Sephora::verProductos() {
    cout << "====== Productos Disponibles ======\n";
    for (size_t i = 0; i < productos.size(); i++) {
        cout << i + 1 << ". " << productos[i].tipo << " - " << productos[i].marca
             << " (" << productos[i].cantidad << " disponibles)\n";
    }
}

void Sephora::hacerPedido() {
    if (cliente.nombre.empty()) {
        cout << "Debe iniciar sesión antes de hacer un pedido.\n";
        return;
    }
    verProductos();
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

void Sephora::ejecutar() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cliente.iniciarSesion();
                break;
            case 2:
                verProductos();
                break;
            case 3:
                hacerPedido();
                break;
            case 4:
                cout << "Gracias por visitar Sephora. ¡Hasta pronto!\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 4);
}
