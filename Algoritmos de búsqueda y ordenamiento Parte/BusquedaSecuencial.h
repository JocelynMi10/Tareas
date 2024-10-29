#ifndef BUSQUEDASECUENCIAL_H
#define BUSQUEDASECUENCIAL_H

#include <vector>
#include <cstring>  // Para strcmp()

class BusquedaSecuencial {
public:
    int buscar(const std::vector<const char*>& datos, const char* nombre);
};

#endif // BUSQUEDASECUENCIAL_H
