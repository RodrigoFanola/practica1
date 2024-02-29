// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 25/02/2024
// Número de ejercicio: 3
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )

#include <iostream>
#include <cmath>

int main() {
    float x1, y1, x2, y2;
    
    // El programa lee las coordenadas de los puntos P1 y P2 desde la entrada estándar
    std::cout << "Ingrese las coordenadas de P1 (x1, y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Ingrese las coordenadas de P2 (x2, y2): ";
    std::cin >> x2 >> y2;
    
    // Se calcula  la distancia usando la fórmula de la distancia euclidiana
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Se imprime la distancia
    std::cout << "La distancia entre P1 y P2 es: " << distancia << std::endl;
    
    return 0;
}