// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 28
// Problema planteado: Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días

#include <iostream>

using namespace std;

int main() {
    // Variables para almacenar las dos fechas
    int dia1, mes1, anio1, dia2, mes2, anio2;

    // Se piden al usuario los valores de las dos fechas
    cout << "Ingrese la primera fecha (dia mes año): ";
    cin >> dia1 >> mes1 >> anio1;
    cout << "Ingrese la segunda fecha (dia mes año): ";
    cin >> dia2 >> mes2 >> anio2;

    // Se calcula el número de días entre las dos fechas
    int totalDias = 0;

    // Se cuentan los días completos de cada año entre las dos fechas
    for (int i = anio1 + 1; i < anio2; i++) {
        totalDias += 12 * 30;
    }

    // Se cuentan los días completos de cada mes entre las dos fechas
    for (int i = mes1 + 1; i <= 12; i++) {
        totalDias += 30;
    }
    for (int i = 1; i < mes2; i++) {
        totalDias += 30;
    }

    // Se cuentan los días restantes del primer mes
    totalDias += 30 - dia1;

    // Se cuentan los días restantes del segundo mes
    totalDias += dia2;

    // Se muestra el resultado
    cout << "El número de días entre las dos fechas es: " << totalDias << endl;

    return 0;
}