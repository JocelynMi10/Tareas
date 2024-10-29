//
// Created by jocel on 28/10/2024.
//

#include "BusquedaBinaria.h"
#include <algorithm>  // Para std::sort
#include <cstring>    // Para strcmp()
//The strcmp() function in C++ compares two null-terminating strings (C-strings).
// The comparison is done lexicographically
int BusquedaBinaria::buscar(std::vector<const char*> datos, const char* nombre) {
    std::sort(datos.begin(), datos.end(), [](const char* a, const char* b) {
        return strcmp(a, b) < 0;  // Ordena el vector en orden lexicográfico
    });

    int izquierda = 0;
    int derecha = datos.size() - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        int resultado = strcmp(datos[medio], nombre);
        if (resultado == 0) {
            return medio;  // Nombre encontrado
        }
        if (resultado < 0) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1;  // Nombre no encontrado
}