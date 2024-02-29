// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 16
// Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior, obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2).

#include <iostream>

int main() {
    // Definir tres variables enteras para almacenar el número, el límite inferior y el límite superior del intervalo
    int numero, limiteInferior, limiteSuperior;

    // Solicitar al usuario que ingrese el número, el límite inferior y el límite superior del intervalo y almacenarlos en las variables correspondientes
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    std::cout << "Ingrese el límite inferior del intervalo: ";
    std::cin >> limiteInferior;

    std::cout << "Ingrese el límite superior del intervalo: ";
    std::cin >> limiteSuperior;

    // Verificar si el número está dentro del intervalo
    if (numero >= limiteInferior && numero <= limiteSuperior) {
        // Calcular el cuadrado del número
        int cuadrado = numero * numero;

        // Mostrar el cuadrado del número al usuario
        std::cout << "El cuadrado del número es: " << cuadrado << std::endl;
    } else if (numero < limiteInferior) {
        // Calcular el inverso del número
        double inverso = 1.0 / numero;

        // Mostrar el inverso del número al usuario
        std::cout << "El inverso del número es: " << inverso << std::endl;
    } else {
        // Calcular la mitad del número
        double mitad = numero / 2.0;

        // Mostrar la mitad del número al usuario
        std::cout << "La mitad del número es: " << mitad << std::endl;
    }

    return 0;
}