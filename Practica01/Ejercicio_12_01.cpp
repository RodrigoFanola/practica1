// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 26/02/2024
// Número de ejercicio: 12
// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos.

#include <iostream>

int main() {
    int segundos; // Declaramos una variable para almacenar los segundos

    // Leemos el valor de los segundos desde la entrada estándar
    std::cout << "Ingrese un valor en segundos: ";
    std::cin >> segundos;

    // Calculamos las horas, minutos y segundos
    int horas = segundos / 3600; // 1 hora = 3600 segundos
    segundos %= 3600; // Se resta la cantidad de segundos correspondientes a las horas calculadas
    int minutos = segundos / 60; // 1 minuto = 60 segundos
    segundos %= 60; // Se resta la cantidad de segundos correspondientes a los minutos calculados

    // Imprimimos los resultados
    std::cout << "Horas: " << horas << ", Minutos: " << minutos << ", Segundos: " << segundos << std::endl;

    return 0;
}