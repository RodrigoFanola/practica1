// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 10/03/2024
// Número de ejercicio: 7
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto 

#include <iostream>

bool esBisiesto(int año) {
    // Un año es bisiesto si es divisible por 4 y no es divisible por 100, o si es divisible por 400
    return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}

int main() {
    int año;
    std::cout << "Ingrese un año: ";
    std::cin >> año;

    // Verificar si el año es bisiesto
    if (esBisiesto(año)) {
        std::cout << año << " es un año bisiesto." << std::endl;
    } else {
        std::cout << año << " no es un año bisiesto." << std::endl;
    }

    return 0;
}