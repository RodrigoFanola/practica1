// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 25/02/2024
// Fecha modificación: 26/02/2024
// Número de ejercicio: 6
// Problema planteado:En el estacionamiento del CineCenter se cobra 17 Bs la primera hora, si pasa de unahora se cobra 15 Bs adicional por hora. Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar.

#include <iostream>

int main() {
    // Tarifa por la primera hora
    const int tarifaPrimeraHora = 17;

    // Tarifa adicional por hora
    const int tarifaHoraAdicional = 15;

    // Variable para almacenar el número de horas de estacionamiento
    int horasEstacionado;

    // Se solicita al usuario ingresar el número de horas de estacionamiento
    std::cout << "Ingrese el número de horas de estacionamiento: ";
    std::cin >> horasEstacionado;

    // Se valida que el número de horas sea positivo
    if (horasEstacionado < 1) {
        std::cout << "El número de horas debe ser al menos 1" << std::endl;
        return 1;
    }

    // El programa calcula el costo total de estacionamiento
    int costoEstacionamiento;
    if (horasEstacionado == 1) {
        costoEstacionamiento = tarifaPrimeraHora;
    } else {
        costoEstacionamiento = tarifaPrimeraHora + tarifaHoraAdicional * (horasEstacionado - 1);
    }

    // Se imprimir el costo total de estacionamiento
    std::cout << "El costo total de estacionamiento es de " << costoEstacionamiento << " Bs." << std::endl;

    return 0;
}