// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 19
// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos

#include <iostream>
#include <cmath> 

int main() {
    // Definir una variable entera para almacenar el número ingresado por el usuario
    int numero;

    // Solicitar al usuario que ingrese un número entero
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    // Obtener el primer dígito del número ingresado
    int primer_digito = numero / pow(10, (int)log10(numero));

    // Obtener el segundo dígito del número ingresado
    int segundo_digito = numero / 10 % 10;

    // Calcular la suma de los dos primeros dígitos
    int suma = primer_digito + segundo_digito;

    // Mostrar la suma de los dos primeros dígitos
    std::cout << "La suma de los dos primeros dígitos es: " << suma << std::endl;

    return 0;
}