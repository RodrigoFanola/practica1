// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 29
// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Número de términos que quieres generar
    int n;
    cout << "Ingrese el número de términos a generar: ";
    cin >> n;

    // Vector para almacenar los términos de la secuencia
    vector<int> secuencia(n);

    // Primeros dos términos de la secuencia
    secuencia[0] = 1;
    secuencia[1] = 1;

    // Generar los términos restantes
    for (int i = 2; i < n; i++) {
        secuencia[i] = secuencia[i-1] + i;
    }

    // Mostrar la secuencia generada
    cout << "Secuencia generada: ";
    for (int i = 0; i < n; i++) {
        cout << secuencia[i] << " ";
    }
    cout << endl;

    return 0;
}