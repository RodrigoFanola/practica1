// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 12/03/2024
// Número de ejercicio: 10
// Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones.
// La entrada de valores es para las calificaciones, debe hacerlo mediante una función (realizar con vectores).

#include <iostream>
#include <vector>

// Función para solicitar las calificaciones al usuario y almacenarlas en un vector
std::vector<int> solicitarCalificaciones(int cantidad) {
    std::vector<int> calificaciones(cantidad);
    for (int i = 0; i < cantidad; ++i) {
        std::cout << "Ingrese la calificación " << i + 1 << " (entre 1 y 100): ";
        std::cin >> calificaciones[i];
        // Verificar si la calificación está dentro del rango permitido
        while (calificaciones[i] < 1 || calificaciones[i] > 100) {
            std::cout << "La calificación debe estar en el rango de 1 a 100. Ingrese nuevamente: ";
            std::cin >> calificaciones[i];
        }
    }
    return calificaciones;
}

// Función para calcular la sumatoria de las calificaciones
int calcularSumatoria(const std::vector<int>& calificaciones) {
    int sumatoria = 0;
    for (int calificacion : calificaciones) {
        sumatoria += calificacion;
    }
    return sumatoria;
}

// Función para calcular el promedio de las calificaciones
float calcularPromedio(const std::vector<int>& calificaciones) {
    int sumatoria = calcularSumatoria(calificaciones);
    return static_cast<float>(sumatoria) / calificaciones.size();
}

int main() {
    int N;
    std::cout << "Ingrese la cantidad de calificaciones: ";
    std::cin >> N;

    // Solicitar las calificaciones al usuario
    std::vector<int> calificaciones = solicitarCalificaciones(N);

    // Calcular la sumatoria y el promedio de las calificaciones
    int sumatoria = calcularSumatoria(calificaciones);
    float promedio = calcularPromedio(calificaciones);

    // Mostrar resultados
    std::cout << "La sumatoria de las calificaciones es: " << sumatoria << std::endl;
    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;

    return 0;
}
