//
// Created by Natalia on 02/12/2024.
//

#include "Comentario.h"
#include <iostream>
using namespace std;

Comentario::Comentario(int calificacion, string review) : calificacion(calificacion), review(review) {}

int Comentario::obtenerCalificacion() {
    return calificacion;
}

string Comentario::mostrarComentario() {
    cout << "Calificacion: " << calificacion << "/5, Reseña: " << review << endl;
}
