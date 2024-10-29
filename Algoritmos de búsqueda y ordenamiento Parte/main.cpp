#include <iostream>
#include <vector>
#include <cstring>  // Para strcmp()
#include "BusquedaSecuencial.h"
#include "BusquedaBinaria.h"

int main() {
    std::vector<const char*> nombres = {"Laura", "Fernanda", "Monge", "Oviedo", "Carlos", "Ana", "Mariana",
                                        "Luis", "Sofia", "Andres", "Javier", "Valeria", "Gabriela", "Diego", "Camila"};
    char nombreBuscado[50];

    std::cout << "Ingrese el nombre a buscar: ";
    std::cin.getline(nombreBuscado, 50);

    // Instanciamos las clases de búsqueda
    BusquedaSecuencial busquedaSecuencial;
    BusquedaBinaria busquedaBinaria;

    // Ejecución de la búsqueda secuencial
    int resultadoSecuencial = busquedaSecuencial.buscar(nombres, nombreBuscado);
    if (resultadoSecuencial != -1) {
        std::cout << "Busqueda Secuencial: Nombre encontrado en la posición " << resultadoSecuencial << std::endl;
    } else {
        std::cout << "Busqueda Secuencial: Nombre no encontrado." << std::endl;
    }

    // Ejecución de la búsqueda binaria
    int resultadoBinario = busquedaBinaria.buscar(nombres, nombreBuscado);
    if (resultadoBinario != -1) {
        std::cout << "Busqueda Binaria: Nombre encontrado en la posición " << resultadoBinario << std::endl;
    } else {
        std::cout << "Busqueda Binaria: Nombre no encontrado." << std::endl;
    }

    return 0;
}
