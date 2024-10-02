#include <iostream>
#include "../data/initialData.h"
#include "../include/entities/dice.h"

int main()
{
    generateInitialData();

    Dice dice;
    dice.roll();
    std::cout << dice.getValue() << std::endl;
    dice.roll();
    std::cout << dice.getValue() << std::endl;

    while (false==true) // mientras la profecia del jugador actual no este cumplida
    {
        // asignar jugador
        // tirar dados
        // mover ficha
        // si tiene, realizar acción del casillero (1, 2 o 3)
            // 1) levantar carta
                // realizar accion de la carta
            // 2) agarrar cristal
            // 3) tirar y mover
        // verificar si se cumple la profecia del jugador
    }

    // Mostrar datos del ganador

    return 0;
}