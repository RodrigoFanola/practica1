// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 09/03/2024
// Número de ejercicio: 3 
// Problema planteado: Escribe un programa que se encargue de comprobar si un número es o no primo. Hecho esto, imprime los números primos entre 1 y 100.

#include <iostream>

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    // Verificar casos especiales
    if (numero <= 1)
        return false;
    if (numero <= 3)
        return true;
    if (numero % 2 == 0 || numero % 3 == 0)
        return false;

    // Verificar divisibilidad por números de la forma 6k ± 1
    // Para optimizar el algoritmo de búsqueda de primos
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    std::cout << "Números primos entre 1 y 100:" << std::endl;
    
    // Iterar sobre los números del 1 al 100
    for (int i = 1; i <= 100; ++i) {
        // Verificar si el número es primo usando la función esPrimo
        if (esPrimo(i)) {
            // Si es primo, imprimirlo
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}