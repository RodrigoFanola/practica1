// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 26/02/2024
// Número de ejercicio: 8
// Problema planteado: Mostrar los primero 100 número primos

#include <iostream>

// Definimos una función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero < 2) {  // Si el número es menor que 2, no es primo
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {  // Iteramos desde 2 hasta la raíz cuadrada de numero
        if (numero % i == 0) {  // Si el número es divisible por i, no es primo
            return false;
        }
    }
    return true;  // Si no se encontró ningún divisor, el número es primo
}

int main() {
    // Inicializamos una variable para almacenar los números primos encontrados
    int contador = 0;
    int numero = 2;

    // Buscamos los primeros 100 números primos
    while (contador < 100) {
        if (esPrimo(numero)) {  // Si el número es primo, lo imprimimos y aumentamos el contador
            std::cout << numero << " ";
            contador++;
        }
        numero++;  // Pasamos al siguiente número
    }

    return 0;
}