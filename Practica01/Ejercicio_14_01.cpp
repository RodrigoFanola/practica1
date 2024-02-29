// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 26/02/2024
// Número de ejercicio: 14
// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada.

#include <iostream>
#include <cmath> // para usar la función pow()

int main() {
    // Definir variables para la base y la altura de la pirámide
    double base, altura;

    // Solicitar al usuario que ingrese la longitud de un lado de la base
    std::cout << "Ingrese la longitud de un lado de la base de la pirámide (en unidades de medida): ";
    std::cin >> base;

    // Solicitar al usuario que ingrese la altura de la pirámide
    std::cout << "Ingrese la altura de la pirámide (en unidades de medida): ";
    std::cin >> altura;

    // Calcular el área de la base cuadrada
    double areaBase = pow(base, 2); // Usando la función pow() para elevar al cuadrado

    // Calcular el volumen de la pirámide
    double volumen = (areaBase * altura) / 3.0; // Dividir por 3.0 para obtener un resultado con decimales

    // Mostrar el resultado al usuario
    std::cout << "El volumen de la pirámide es: " << volumen << " unidades cúbicas." << std::endl;

    return 0;
}