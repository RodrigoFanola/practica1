// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 25/02/2024
// Número de ejercicio: 1
// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.

#include <iostream>

int main() {
    // Utilizo una variable para almacenar el número total de notas
    int n;
    // Utilizo una variable para almacenar la suma de todas las notas
    float sum = 0;
    
    // Creo un comando para leer el número total de notas desde la entrada estándar
    std::cin >> n;
    
    // El codigo lee las n notas desde la entrada y sumarlas
    for (int i = 0; i < n; i++) {
        float nota;
        std::cin >> nota;
        sum += nota;
    }
    
    // Calcular el promedio dividiendo la suma de las notas por el número total de notas
    float promedio = sum / n;
    
    // Se imprime el promedio
    std::cout << "Promedio: " << promedio << std::endl;
    
    return 0;
}