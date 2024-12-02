//
// Created by Natalia on 02/12/2024.
//

#ifndef COMENTARIO_H
#define COMENTARIO_H

#include <string>
using namespace std;

class Comentario {
private:
    int calificacion;
    string review;
public:
    Comentario(int calificacion, string review);
    int obtenerCalificacion();
    string mostrarComentario();
};

#endif //COMENTARIO_H

