#include "BusquedaSecuencial.h"

int BusquedaSecuencial::buscar(const std::vector<const char*>& datos, const char* nombre) {
    for (size_t i = 0; i < datos.size(); i++) {
        if (strcmp(datos[i], nombre) == 0) { // Comparación con strcmp
            return i; // Retorna el índice si encuentra el nombre
        }
    }
    return -1; // Retorna -1 si no encuentra el nombre
}
