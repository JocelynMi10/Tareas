#include "Cola.h"
#include <iostream>

Cola::Cola() : frente(0), final(-1), longitud(0) {}

bool Cola::esVaciaCola() const {
    return longitud == 0;
}

Cola Cola::insertarElem(const std::string &turno) {
    if (longitud < MAX_SIZE) {
        final = (final + 1) % MAX_SIZE;  // Movimiento circular del final
        datos[final] = turno;            // Inserta el turno
        longitud++;                      // Incrementa la longitud
    }
    return *this;
}

Cola Cola::atender(std::string &turno) {
    if (!esVaciaCola()) {
        turno = datos[frente];           // Obtiene el turno del frente
        frente = (frente + 1) % MAX_SIZE; // Movimiento circular del frente
        longitud--;                      // Decrementa la longitud
    }
    return *this;
}

Cola Cola::eliminarElem(int posicion) {
    if (posicion >= 0 && posicion < longitud) {
        for (int i = posicion; i != final; i = (i + 1) % MAX_SIZE) {
            datos[i] = datos[(i + 1) % MAX_SIZE]; // Mueve los turnos hacia adelante
        }
        final = (final - 1 + MAX_SIZE) % MAX_SIZE; // Ajusta el final
        longitud--;                                // Decrementa la longitud
    }
    return *this;
}

std::string Cola::ultimoElem() const {
    if (!esVaciaCola()) {
        return datos[final]; // Retorna el último turno
    }
    return "Cola vacía";
}

int Cola::getLongitud() const {
    return longitud; // Retorna la cantidad de turnos
}

void Cola::destruirCola() {
    frente = 0;
    final = -1;
    longitud = 0; // Resetea la cola
}

void Cola::listarCola() const {
    if (esVaciaCola()) {
        std::cout << "La cola está vacía.\n";
    } else {
        std::cout << "Turnos en la cola:\n";
        for (int i = 0; i < longitud; i++) {
            int idx = (frente + i) % MAX_SIZE;
            std::cout << i + 1 << ". " << datos[idx] << "\n";
        }
    }
}
