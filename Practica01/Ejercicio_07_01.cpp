// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 26/02/2024
// Número de ejercicio: 7
// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mesen literal. Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje demes inválido

#include <iostream>

// Función que determina si un número es primo
bool esPrimo(int numero) {
    // Si el número es menor o igual a 1, no es primo
    if (numero <= 1) {
        return false;
    }
    
    // Se comprueba si el número es divisible por algún número menor o igual a su raíz cuadrada
    for (int i = 2; i * i <= numero; i++) {
        // Si el número es divisible, no es primo
        if (numero % i == 0) {
            return false;
        }
    }
    // Si no se encontró ningún divisor, el número es primo
    return true;
}

int main() {
    // Contador para llevar el registro de cuántos números primos hemos encontrado
    int contador = 0;
    
    // Repetimos sobre los números enteros desde 2 hasta encontrar 100 números primos
    for (int i = 2; contador < 100; i++) {
        // Si el número actual es primo, lo imprimimos y actualizamos el contador
        if (esPrimo(i)) {
            std::cout << i << " ";
            contador++;
        }
    }
    
    // Se imprimen los primeros 100 números primos
    return 0;
}