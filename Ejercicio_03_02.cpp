// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 09/03/2024
// Número de ejercicio: 2
// Problema planteado: Escribe un programa que muestre por consola los números de 1 a 100 (ambos incluidos y con un salto de línea entre cada impresión), sustituyendo los siguientes:
// Un Anagrama consiste en formar una palabra reordenando TODAS las letras de otra palabra inicial.
// - NO hace falta comprobar que ambas palabras existan.
// - Dos palabras exactamente iguales no son anagrama.

#include <iostream>
#include <string>

bool sonAnagramas(const std::string& palabra1, const std::string& palabra2) {
    // Verificar si las palabras tienen la misma longitud
    if (palabra1.length() != palabra2.length())
        return false;

    // Contar la frecuencia de cada letra en ambas palabras
    int contador[26] = {0}; // Un arreglo de tamaño 26 para representar las letras del alfabeto en inglés

    // Incrementar el contador para cada letra en la primera palabra
    for (char c : palabra1)
        contador[c - 'a']++;

    // Decrementar el contador para cada letra en la segunda palabra
    for (char c : palabra2)
        contador[c - 'a']--;

    // Verificar si todos los contadores son cero, lo que indica que son anagramas
    for (int i = 0; i < 26; ++i) {
        if (contador[i] != 0)
            return false;
    }

    return true;
}

int main() {
    std::string palabra1, palabra2;
    std::cout << "Ingrese la primera palabra: ";
    std::cin >> palabra1;
    std::cout << "Ingrese la segunda palabra: ";
    std::cin >> palabra2;

    if (sonAnagramas(palabra1, palabra2)) {
        std::cout << "Las palabras son anagramas." << std::endl;
    } else {
        std::cout << "Las palabras no son anagramas." << std::endl;
    }

    return 0;
}