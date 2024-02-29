// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 18
// Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman (en honor al matemático Ullman)

#include <iostream>

int main() {
    // Definir un entero inicial
    int n;

    // Solicitar al usuario que ingrese un entero n > 1
    std::cout << "Ingrese un entero n mayor que 1: ";
    std::cin >> n;

    // Mostrar el entero inicial
    std::cout << n << " ";

    // Iterar hasta que n sea igual a 1
    while (n != 1) {
        // Si n es par, dividirlo entre 2
        if (n % 2 == 0) {
            n = n / 2;
        } else { // Si n es impar, multiplicarlo por 3 y sumarle 1
            n = 3 * n + 1;
        }

        // Mostrar el nuevo valor de n
        std::cout << n << " ";
    }

    // Mostrar un salto de línea al final
    std::cout << std::endl;

    return 0;
}