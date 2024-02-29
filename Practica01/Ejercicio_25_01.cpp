// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 25
// Problema planteado: Calcular la sucesión

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de términos a calcular: ";
    cin >> n;

    double resultado = 2.0; // El primer término es 2
    double previo = 2.0; // Inicializamos el término anterior como 2

    for (int i = 2; i <= n; i++) {
        previo = previo + 1.0/i;
        resultado -= 1.0/previo;
    }

    cout << "El resultado de los primeros " << n << " términos es: " << resultado << endl;

    return 0;
}