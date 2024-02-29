// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 27
// Problema planteado: Leer un número entero y mostrarlo con las cifras al revés

#include <iostream>

using namespace std;

int main() {
    // Declaramos una variable para almacenar el número entero ingresado por el usuario
    int numero;
    
    // Solicitamos al usuario que ingrese un número entero
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Inicializamos una variable temporal para almacenar el número invertido
    int numeroInvertido = 0;
    
    // Creamos un bucle que recorre las cifras del número ingresado
    while (numero > 0) {
        // Obtenemos el último dígito del número ingresado
        int digito = numero % 10;
        
        // Multiplicamos el número invertido por 10 y le sumamos el dígito obtenido
        numeroInvertido = numeroInvertido * 10 + digito;
        
        // Dividimos el número por 10 para eliminar el último dígito
        numero = numero / 10;
    }

    // Mostramos el número invertido en la consola
    cout << "El número invertido es: " << numeroInvertido << endl;

    return 0;
}