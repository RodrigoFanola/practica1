// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 26/02/2024
// Número de ejercicio: 9
// Problema planteado: Indique la cantidad de dígitos que tiene un número entero

#include <iostream>

int main() {
    // Declaramos una variable para almacenar el número entero y otra para contar los dígitos
    int numero, contador = 0;
    
    // Solicitamos al usuario ingresar el número entero
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;
    
    // Si el número ingresado es negativo, lo hacemos positivo para contar sus dígitos
    if (numero < 0) {
        numero *= -1;
    }
    
    // Usamos un bucle while para dividir el número entre 10 sucesivamente
    // hasta que el cociente sea 0, incrementando el contador en cada iteración
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    
    // Mostramos la cantidad de dígitos del número ingresado
    std::cout << "El número tiene " << contador << " dígitos." << std::endl;
    
    return 0;
}