// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 22
// Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número es perfecto si la suma de sus divisores es igual al número. 

#include <iostream>

using namespace std;

bool esNumeroPerfecto(int numero) {
    // Inicializamos la suma de los divisores en 1 porque 1 siempre es divisor
    int sumaDivisores = 1;

    // Iteramos desde 2 hasta la mitad del número, ya que un número no puede tener un divisor mayor que su mitad
    for (int i = 2; i <= numero / 2; ++i) {
        // Si el número es divisible por i, sumamos i a la suma de los divisores
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }

    // Si la suma de los divisores es igual al número original, entonces es perfecto
    return sumaDivisores == numero;
}

int main() {
    // Pedimos al usuario que ingrese un número
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Verificamos si el número es perfecto y mostramos el resultado
    if (esNumeroPerfecto(numero)) {
        cout << "El numero " << numero << " es perfecto." << endl;
    } else {
        cout << "El numero " << numero << " no es perfecto." << endl;
    }

    return 0;
}