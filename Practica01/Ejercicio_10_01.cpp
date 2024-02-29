// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 26/02/2024
// Número de ejercicio: 10
// Problema planteado: Escriba un programa que ingrese varios valores numéricos, hasta el que el usuario ingrese el valor de cero calculo la suma y el promedio de estos.

#include <iostream>

int main() {
    // Inicializamos las variables para almacenar la suma y el contador
    double valor, suma = 0;
    int contador = 0;

    // Le pedimos al usuario que ingrese valores numéricos
    std::cout << "Ingrese varios valores numericos (ingrese 0 para terminar):" << std::endl;

    // Utilizamos un bucle do-while para leer los valores hasta que se ingrese un cero
    do {
        // Leemos el valor ingresado por el usuario
        std::cin >> valor;

        // Verificamos si el valor es distinto de cero para agregarlo a la suma
        if (valor != 0) {
            suma += valor; // Sumamos el valor a la suma
            contador++;    // Incrementamos el contador
        }
    } while (valor != 0); // El bucle se repite mientras el valor ingresado sea distinto de cero

    // Calculamos el promedio
    double promedio = suma / contador;

    // Mostramos los resultados
    std::cout << "La suma de los valores es: " << suma << std::endl;
    std::cout << "El promedio de los valores es: " << promedio << std::endl;

    return 0;
}