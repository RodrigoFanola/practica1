// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 24
// Problema planteado: En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”

#include <iostream>

using namespace std;

int main() {
    int cantidadLlantas;
    double precioUnitario;

    cout << "Ingrese la cantidad de llantas a comprar: ";
    cin >> cantidadLlantas;

    if (cantidadLlantas < 5) {
        precioUnitario = 300;
    } else if (cantidadLlantas <= 10) {
        precioUnitario = 250;
    } else {
        precioUnitario = 200;
    }

    double total = cantidadLlantas * precioUnitario;

    cout << "El precio unitario por llanta es: " << precioUnitario << " Bs." << endl;
    cout << "El total a pagar por " << cantidadLlantas << " llantas es: " << total << " Bs." << endl;

    return 0;
}