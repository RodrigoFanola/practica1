// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 25/02/2024
// Número de ejercicio: 4
// Problema planteado: Número primo

#include <iostream>

// Función para determinar si un número es primo o no
bool esPrimo(int n) {
    // Si el número es menor o igual a 1, no es primo
    if (n <= 1) {
        return false;
    }
    // Repetir desde 2 hasta la raíz cuadrada del número
    for (int i = 2; i * i <= n; i++) {
        // Si el número es divisible por i, no es primo
        if (n % i == 0) {
            return false;
        }
    }
    // Si no se encontró ningún divisor, el número es primo
    return true;
}

int main() {
    int n;
    
    // Se solicita al usuario ingresar un número
    std::cout << "Ingrese un número: ";
    std::cin >> n;
    
    // El programa verifica si el número ingresado es primo usando la función esPrimo
    if (esPrimo(n)) {
        std::cout << n << " es un número primo" << std::endl;
    } else {
        std::cout << n << " no es un número primo" << std::endl;
    }
    
    return 0;
}
