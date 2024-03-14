// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 09/03/2024
// Número de ejercicio: 1
// Problema planteado: Escribe un programa que muestre por consola los números de 1 a 100 (ambos incluidos y con un salto de línea entre cada impresión), sustituyendo los siguientes):
// - Múltiplos de 3 por la palabra "fizz".
// - Múltiplos de 5 por la palabra "buzz".
// - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz"

#include <iostream>

int main() {
    // Iterar sobre los números del 1 al 100
    for (int i = 1; i <= 100; ++i) {
        // Verificar si el número es múltiplo de 3 y de 5 al mismo tiempo
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "fizzbuzz"; // Si es múltiplo de 3 y de 5, imprimir "fizzbuzz"
        } else if (i % 3 == 0) {
            std::cout << "fizz"; // Si es múltiplo de 3, imprimir "fizz"
        } else if (i % 5 == 0) {
            std::cout << "buzz"; // Si es múltiplo de 5, imprimir "buzz"
        } else {
            std::cout << i; // Si no es múltiplo de 3 ni de 5, imprimir el número
        }

        std::cout << std::endl; // Agregar un salto de línea después de cada número
    }

    return 0;
}
