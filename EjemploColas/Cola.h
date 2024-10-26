// Cola.h
#ifndef COLA_H
#define COLA_H

#include <string>

class Cola {
private:
    static const int MAX_SIZE = 100;       // Tamaño máximo de la cola
    std::string datos[MAX_SIZE];           // Arreglo para almacenar los turnos
    int frente;                            // Índice del frente de la cola
    int final;                             // Índice del final de la cola
    int longitud;                          // Cantidad de elementos en la cola

public:
    Cola();                                // Constructor
    bool esVaciaCola() const;              // Verifica si la cola está vacía
    Cola insertarElem(const std::string &turno); // Inserta un turno alfanumérico
    Cola atender(std::string &turno);      // Atiende al cliente en frente de la cola
    Cola eliminarElem(int posicion);       // Elimina un turno específico por posición
    std::string ultimoElem() const;        // Retorna el último turno ingresado
    int getLongitud() const;               // Retorna la cantidad de turnos
    void destruirCola();                   // Limpia la cola
    void listarCola() const;               // Lista todos los turnos en la cola
};

#endif
