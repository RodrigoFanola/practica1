// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 26
// Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es

#include <iostream>

using namespace std;

int main() {
    // Declaramos dos variables para almacenar los números ingresados por el usuario
    int num1, num2;
    
    // Solicitamos al usuario que ingrese el primer número
    cout << "Ingrese el primer número: ";
    cin >> num1;
    
    // Solicitamos al usuario que ingrese el segundo número
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Verificamos si num1 es múltiplo de num2
    if (num1 % num2 == 0) {
        // Si el residuo de la división es cero, entonces num1 es múltiplo de num2
        cout << num1 << " es múltiplo de " << num2 << endl;
    } else {
        // Si el residuo de la división no es cero, entonces num1 no es múltiplo de num2
        cout << num1 << " no es múltiplo de " << num2 << endl;
    }

    return 0;
}
