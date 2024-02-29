// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 25/02/2024
// Fecha modificación: 26/02/2024
// Número de ejercicio: 5 
// Problema planteado: numero amigo

#include <iostream>
#include <vector>

using namespace std;

// Función para obtener la suma de los divisores propios de un número
int sumDivisoresPropios(int n) {
    int suma = 1; // 1 es divisor propio de todo número
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            suma += i;
            if (i * i != n) {
                suma += n / i;
            }
        }
    }
    return suma;
}

int main() {
    // Declarar variables para almacenar los números ingresados por el usuario
    int m, n;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese dos números: ";
    cin >> m >> n;

    // Verificar si los números son amigos utilizando la función sumDivisoresPropios
    if (sumDivisoresPropios(m) == n && sumDivisoresPropios(n) == m) {
        cout << m << " y " << n << " son números amigos." << endl;
    } else {
        cout << m << " y " << n << " no son números amigos." << endl;
    }

    return 0;
}