// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 09/03/2024
// Fecha modificación: 10/03/2024
// Número de ejercicio: 4
// Problema planteado: Crea una única función (importante que sólo sea una) que sea capaz de calcular y retornar el área de un polígono. 
// - La función recibirá por parámetro sólo UN polígono a la vez.
// - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
// - Imprime el cálculo del área de un polígono de cada tipo.

#include <iostream>

// Enumeración para representar los tipos de polígonos
enum class TipoPoligono {
    Triangulo,
    Cuadrado,
    Rectangulo
};

// Función para calcular el área de un polígono
double calcularAreaPoligono(TipoPoligono tipo, double base, double altura) {
    switch (tipo) {
        case TipoPoligono::Triangulo:
            return (base * altura) / 2.0;
        case TipoPoligono::Cuadrado:
            return base * base;
        case TipoPoligono::Rectangulo:
            return base * altura;
        default:
            std::cout << "Polígono no soportado." << std::endl;
            return 0.0;
    }
}

int main() {
    // Calcular y mostrar el área de un triángulo
    std::cout << "Área de un triángulo de base 4 y altura 6: ";
    std::cout << calcularAreaPoligono(TipoPoligono::Triangulo, 4.0, 6.0) << std::endl;

    // Calcular y mostrar el área de un cuadrado
    std::cout << "Área de un cuadrado de lado 5: ";
    std::cout << calcularAreaPoligono(TipoPoligono::Cuadrado, 5.0, 0.0) << std::endl;

    // Calcular y mostrar el área de un rectángulo
    std::cout << "Área de un rectángulo de base 7 y altura 8: ";
    std::cout << calcularAreaPoligono(TipoPoligono::Rectangulo, 7.0, 8.0) << std::endl;

    return 0;
}