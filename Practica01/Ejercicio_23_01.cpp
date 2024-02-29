// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 23
// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación, empleando sumas sucesivas.

#include <iostream>

using namespace std;

int multiplicarSinOperador(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; ++i) {
        resultado += a;
    }
    return resultado;
}

int main() {
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    int resultado = multiplicarSinOperador(a, b);
    cout << "El resultado de multiplicar " << a << " por " << b << " es: " << resultado << endl;

    return 0;
}