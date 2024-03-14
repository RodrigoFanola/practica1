// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 11/03/2024
// Número de ejercicio: 8
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>

struct Fecha {
    int dia;
    int mes;
    int año;
};

// Función para calcular la edad a partir de la fecha de nacimiento y la fecha actual
int calcularEdad(const Fecha& fechaNacimiento, const Fecha& fechaActual) {
    int edad = fechaActual.año - fechaNacimiento.año;
    
    // Verificar si ya ha pasado el cumpleaños de este año
    if (fechaNacimiento.mes > fechaActual.mes ||
        (fechaNacimiento.mes == fechaActual.mes && fechaNacimiento.dia > fechaActual.dia)) {
        edad--;
    }

    return edad;
}

int main() {
    Fecha fechaNacimiento, fechaActual;

    std::cout << "Ingrese la fecha de nacimiento (DD MM AAAA): ";
    std::cin >> fechaNacimiento.dia >> fechaNacimiento.mes >> fechaNacimiento.año;

    std::cout << "Ingrese la fecha actual (DD MM AAAA): ";
    std::cin >> fechaActual.dia >> fechaActual.mes >> fechaActual.año;

    // Calcular la edad
    int edad = calcularEdad(fechaNacimiento, fechaActual);

    std::cout << "La edad es: " << edad << " años." << std::endl;

    return 0;
}
