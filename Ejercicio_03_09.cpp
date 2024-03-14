// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 11/03/2024
// Número de ejercicio: 9
// Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso, posteriormente indicar cuál es el nombre de la persona de menor edad, el promedio de
// las estaturas y el de los pesos. (realizar con vectores)

#include <iostream>
#include <vector>
#include <string>

struct Persona {
    std::string nombre;
    int edad;
    float estatura;
    float peso;
};

int main() {
    std::vector<Persona> personas(12); // Vector para almacenar los datos de las personas

    // Leer los datos de las doce personas
    for (int i = 0; i < 12; ++i) {
        std::cout << "Ingrese el nombre de la persona " << i + 1 << ": ";
        std::cin >> personas[i].nombre;

        std::cout << "Ingrese la edad de " << personas[i].nombre << ": ";
        std::cin >> personas[i].edad;

        std::cout << "Ingrese la estatura de " << personas[i].nombre << " (en metros): ";
        std::cin >> personas[i].estatura;

        std::cout << "Ingrese el peso de " << personas[i].nombre << " (en kilogramos): ";
        std::cin >> personas[i].peso;

        std::cout << std::endl;
    }

    // Encontrar la persona de menor edad
    int menorEdad = personas[0].edad;
    std::string nombreMenorEdad = personas[0].nombre;
    for (int i = 1; i < 12; ++i) {
        if (personas[i].edad < menorEdad) {
            menorEdad = personas[i].edad;
            nombreMenorEdad = personas[i].nombre;
        }
    }

    // Calcular el promedio de estaturas y pesos
    float sumaEstaturas = 0.0;
    float sumaPesos = 0.0;
    for (const auto& persona : personas) {
        sumaEstaturas += persona.estatura;
        sumaPesos += persona.peso;
    }
    float promedioEstaturas = sumaEstaturas / 12;
    float promedioPesos = sumaPesos / 12;

    // Mostrar resultados
    std::cout << "La persona de menor edad es: " << nombreMenorEdad << std::endl;
    std::cout << "El promedio de estaturas es: " << promedioEstaturas << " metros." << std::endl;
    std::cout << "El promedio de pesos es: " << promedioPesos << " kilogramos." << std::endl;

    return 0;
}
