// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 10/03/2024
// Número de ejercicio: 6
// Problema planteado: Crea un programa que cuente cuantas veces se repite cada palabra y que muestre el recuento final de todas ellas.
// - Los signos de puntuación no forman parte de la palabra.
// - Una palabra es la misma, aunque aparezca en mayúsculas y minúsculas.
// - No se pueden utilizar funciones propias del lenguaje que lo resuelvan automáticamente

#include <iostream>
#include <string>

// Estructura para almacenar el recuento de palabras
struct RecuentoPalabras {
    std::string palabra;
    int contador;
};

// Función para limpiar una palabra de signos de puntuación y convertirla a minúsculas
std::string limpiarPalabra(const std::string& palabra) {
    std::string palabraLimpia;
    for (char c : palabra) {
        // Verificar si el carácter es una letra
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            // Convertir a minúscula si es necesario
            if (c >= 'A' && c <= 'Z') {
                palabraLimpia += c - 'A' + 'a';
            } else {
                palabraLimpia += c;
            }
        }
    }
    return palabraLimpia;
}

int main() {
    std::string texto;
    std::cout << "Ingrese un texto: ";
    std::getline(std::cin, texto);

    // Inicializar un array para almacenar el recuento de palabras
    const int TAMANO = 100; // Tamaño máximo del texto
    RecuentoPalabras recuento[TAMANO];
    int numPalabras = 0;

    // Procesar el texto palabra por palabra
    std::string palabraActual;
    for (char c : texto) {
        // Verificar si es un espacio o un signo de puntuación
        if (c == ' ' || c == '.' || c == ',' || c == '!' || c == '?' || c == ';' || c == ':') {
            // Limpiar la palabra y actualizar el recuento
            if (!palabraActual.empty()) {
                std::string palabraLimpia = limpiarPalabra(palabraActual);
                if (!palabraLimpia.empty()) {
                    // Buscar la palabra en el array de recuento
                    bool encontrada = false;
                    for (int i = 0; i < numPalabras; ++i) {
                        if (recuento[i].palabra == palabraLimpia) {
                            recuento[i].contador++;
                            encontrada = true;
                            break;
                        }
                    }
                    // Si la palabra no se encuentra, agregarla al array de recuento
                    if (!encontrada) {
                        recuento[numPalabras].palabra = palabraLimpia;
                        recuento[numPalabras].contador = 1;
                        numPalabras++;
                    }
                }
                palabraActual.clear();
            }
        } else {
            palabraActual += c;
        }
    }

    // Procesar la última palabra
    if (!palabraActual.empty()) {
        std::string palabraLimpia = limpiarPalabra(palabraActual);
        if (!palabraLimpia.empty()) {
            // Buscar la palabra en el array de recuento
            bool encontrada = false;
            for (int i = 0; i < numPalabras; ++i) {
                if (recuento[i].palabra == palabraLimpia) {
                    recuento[i].contador++;
                    encontrada = true;
                    break;
                }
            }
            // Si la palabra no se encuentra, agregarla al array de recuento
            if (!encontrada) {
                recuento[numPalabras].palabra = palabraLimpia;
                recuento[numPalabras].contador = 1;
                numPalabras++;
            }
        }
    }

    // Mostrar el recuento de palabras
    std::cout << "Recuento de palabras:" << std::endl;
    for (int i = 0; i < numPalabras; ++i) {
        std::cout << recuento[i].palabra << ": " << recuento[i].contador << std::endl;
    }

    return 0;
}
