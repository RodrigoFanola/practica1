// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 15
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine cual es el menor.

#include <iostream>

int main() {
    // Definir tres variables enteras para almacenar los tres números ingresados por el usuario
    int num1, num2, num3;

    // Solicitar al usuario que ingrese los tres números y almacenarlos en las variables correspondientes
    std::cout << "Ingrese tres números enteros separados por espacios: ";
    std::cin >> num1 >> num2 >> num3;

    // Verificar si los tres números son diferentes entre sí
    if (num1 != num2 && num1 != num3 && num2 != num3) {
        // Comparar los tres números para determinar cuál es el menor
        int menor = num1; // Suponemos que num1 es el menor inicialmente

        // Verificar si num2 es menor que el menor actual
        if (num2 < menor) {
            menor = num2; // Actualizar el valor del menor
        }

        // Verificar si num3 es menor que el menor actual
        if (num3 < menor) {
            menor = num3; // Actualizar el valor del menor
        }

        // Mostrar el menor número al usuario
        std::cout << "El menor número es: " << menor << std::endl;
    } else {
        // Si los números no son diferentes entre sí, mostrar un mensaje de error al usuario
        std::cout << "Los números no son diferentes entre sí." << std::endl;
    }

    return 0;
}
