// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 25/02/2024
// Número de ejercicio: 2
// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin

#include <iostream>

int main() {
    // Se define una variable para almacenar la temperatura en grados Celsius
    float celsius;
    
    // el programa lee la temperatura en grados Celsius desde la entrada 
    std::cout << "Ingrese la temperatura en grados Celsius: ";
    std::cin >> celsius;
    
    // Se calcula la temperatura en Kelvin usando la fórmula: K = C + 273.15
    float kelvin = celsius + 273.15;
    
    // Se muestra la temperatura en Kelvin
    std::cout << "La temperatura en Kelvin es: " << kelvin << std::endl;
    
    return 0;
}