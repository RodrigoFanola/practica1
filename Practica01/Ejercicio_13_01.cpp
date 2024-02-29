// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 26/02/2024
// Número de ejercicio: 13
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas. Los datos de tipo de cambio debe sacar de la página
// https://www.bcb.gob.bo/?q=cotizaciones_tc


#include <iostream>
#include <string>

int main() {
    // Tasa de cambio fija (1 dólar estadounidense = 6.96 bolivianos)
    double USD_to_BOB = 6.96;

    // Tasa de cambio fija (1 euro = 8.38 bolivianos)
    double EUR_to_BOB = 8.38;

    // Tasa de cambio fija (1 libra esterlina = 9.61 bolivianos)
    double GBP_to_BOB = 9.61;

    // Leer un valor en bolivianos desde la entrada estándar
    double bolivianos;
    std::cout << "Ingrese el valor en bolivianos: ";
    std::cin >> bolivianos;

    // Convertir a Euros, Dólares y Libras Esterlinas
    double euros = bolivianos / EUR_to_BOB;
    double dolares = bolivianos / USD_to_BOB;
    double libras = bolivianos / GBP_to_BOB;

    // Imprimir los resultados
    std::cout << "Euros: " << euros << std::endl;
    std::cout << "Dólares: " << dolares << std::endl;
    std::cout << "Libras Esterlinas: " << libras << std::endl;

    return 0;
}