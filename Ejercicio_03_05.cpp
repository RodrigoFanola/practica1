// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 10/03/2024
// Número de ejercicio: 5
// Problema planteado: Crea un programa que invierta el orden de una cadena de texto sin usar funciones propias del lenguaje que lo hagan de forma automática.
// - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"

#include <iostream>

// Función para invertir una cadena de texto
void invertirCadena(std::string& cadena) {
    int longitud = cadena.length();
    for (int i = 0; i < longitud / 2; ++i) {
        // Intercambiar caracteres desde los extremos
        char temp = cadena[i];
        cadena[i] = cadena[longitud - 1 - i];
        cadena[longitud - 1 - i] = temp;
    }
}

int main() {
    // Pedir al usuario que ingrese una cadena de texto
    std::string texto;
    std::cout << "Ingrese una cadena de texto: ";
    std::getline(std::cin, texto);

    // Invertir la cadena de texto
    invertirCadena(texto);

    // Mostrar la cadena de texto invertida
    std::cout << "Cadena invertida: " << texto << std::endl;

    return 0;
}
