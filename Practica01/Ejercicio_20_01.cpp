// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 20
// Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a aproximaciones, para lo cual se dispone de 5 intentos

#include <iostream>

int main() {
    // Semilla para el generador de números aleatorios
    unsigned int semilla;

    // Pedir al usuario que ingrese la semilla
    std::cout << "Introduce la semilla: ";
    std::cin >> semilla;

    // Inicializar el generador de números aleatorios con la semilla proporcionada
    srand(semilla);

    // Generar un número aleatorio entre 0 y 50
    int numero_pensado = rand() % 51;

    std::cout << "Estoy pensando en un número entre 0 y 50.\n";
    std::cout << "Tienes 5 intentos para adivinarlo.\n";

    // Bucle para los 5 intentos
    for (int intento = 1; intento <= 5; ++intento) {
        std::cout << "Intento " << intento << "\n? ";

        // Leer el número ingresado por el usuario
        int intento_usuario;
        std::cin >> intento_usuario;

        // Comprobar si el número ingresado es igual al número pensado
        if (intento_usuario == numero_pensado) {
            std::cout << "¡Felicitaciones! Adivinaste el número.\n";
            return 0; // Salir del programa
        } else if (intento_usuario < numero_pensado) {
            std::cout << "El número está entre " << intento_usuario << " y 50.\n";
        } else {
            std::cout << "El número está entre 0 y " << intento_usuario << ".\n";
        }
    }

    std::cout << "Lo siento, has excedido el número de intentos. El número pensado era " << numero_pensado << ".\n";
    return 0;
}