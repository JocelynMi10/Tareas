#include <iostream>
#include "Cola.h"

void mostrarMenu() {
    std::cout << "\nMenú de Atención:\n";
    std::cout << "1. Insertar turno\n";
    std::cout << "2. Atender cliente\n";
    std::cout << "3. Ver último turno\n";
    std::cout << "4. Eliminar turno por posición\n";
    std::cout << "5. Listar turnos\n";
    std::cout << "6. Verificar si la cola está vacía\n";
    std::cout << "7. Destruir cola\n";
    std::cout << "8. Salir\n";
    std::cout << "Seleccione una opción: ";
}

int main() {
    Cola miCola;
    int opcion;
    std::string turno;
    int posicion;

    do {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese el turno (por ejemplo, A001): ";
                std::cin >> turno;
                miCola.insertarElem(turno);
                break;

            case 2:
                if (!miCola.esVaciaCola()) {
                    miCola.atender(turno);
                    std::cout << "Atendiendo al turno: " << turno << "\n";
                } else {
                    std::cout << "No hay turnos en la cola.\n";
                }
                break;

            case 3:
                std::cout << "El último turno es: " << miCola.ultimoElem() << "\n";
                break;

            case 4:
                std::cout << "Ingrese la posición del turno a eliminar (1 a " << miCola.getLongitud() << "): ";
                std::cin >> posicion;
                miCola.eliminarElem(posicion - 1);
                break;

            case 5:
                miCola.listarCola();
                break;

            case 6:
                if (miCola.esVaciaCola()) {
                    std::cout << "La cola está vacía.\n";
                } else {
                    std::cout << "La cola no está vacía.\n";
                }
                break;

            case 7:
                miCola.destruirCola();
                std::cout << "La cola ha sido destruida.\n";
                break;

            case 8:
                std::cout << "Saliendo del sistema.\n";
                break;

            default:
                std::cout << "Opción inválida, intente de nuevo.\n";
                break;
        }

    } while (opcion != 8);

    return 0;
}
