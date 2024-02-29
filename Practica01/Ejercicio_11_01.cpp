// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 26/02/2024
// Número de ejercicio: 11
// Problema planteado: Escriba la sucesión de Fibonacci

#include <iostream>

int main() {
    int N;
    
    // Leemos el valor de N desde la entrada estándar
    std::cout << "Ingrese el numero de elementos de la sucesion de Fibonacci que desea generar: ";
    std::cin >> N;

    // Verificamos si N es menor o igual a 0
    if (N <= 0) {
        std::cerr << "N debe ser un numero positivo." << std::endl;
        return 1;
    }

    // Inicializamos los primeros dos elementos de la sucesión de Fibonacci
    int a = 0, b = 1;
    
    // Imprimimos los primeros N números de la sucesión de Fibonacci
    std::cout << "Los primeros " << N << " numeros de la sucesion de Fibonacci son:" << std::endl;
    std::cout << a << " ";
    
    for (int i = 2; i <= N; ++i) {
        std::cout << b << " ";
        
        // Calculamos el siguiente número en la sucesión de Fibonacci
        int temp = a + b;
        a = b;
        b = temp;
    }
    
    std::cout << std::endl;

    return 0;
}