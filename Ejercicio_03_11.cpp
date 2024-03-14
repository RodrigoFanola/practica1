// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 12/03/2024
// Número de ejercicio: 11
// Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de una materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se
// muestra la nota final y si aprobó o reprobó el curso (realizar con vectores).

#include <iostream>
#include <string>
#include <vector>

// Estructura para almacenar la información de un curso
struct Curso {
    std::string nombreMateria;
    std::string paralelo;
    std::string nombreDocente;
    std::vector<float> notasPeriodo;
};

// Función para calcular la nota final de un curso
float calcularNotaFinal(const Curso& curso) {
    float sumaNotas = 0.0f;
    for (float nota : curso.notasPeriodo) {
        sumaNotas += nota;
    }
    return sumaNotas / curso.notasPeriodo.size();
}

// Función para determinar si un estudiante aprobó o reprobó un curso
std::string determinarAprobacion(float notaFinal) {
    return notaFinal >= 51.0f ? "Aprobado" : "Reprobado";
}

int main() {
    Curso curso;

    // Solicitar información del curso al usuario
    std::cout << "Ingrese el nombre de la materia: ";
    std::getline(std::cin, curso.nombreMateria);

    std::cout << "Ingrese el paralelo: ";
    std::getline(std::cin, curso.paralelo);

    std::cout << "Ingrese el nombre del docente: ";
    std::getline(std::cin, curso.nombreDocente);

    int cantidadNotas;
    std::cout << "Ingrese la cantidad de notas de periodo: ";
    std::cin >> cantidadNotas;

    // Leer las notas de periodo
    std::cout << "Ingrese las notas de periodo:" << std::endl;
    for (int i = 0; i < cantidadNotas; ++i) {
        float nota;
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> nota;
        curso.notasPeriodo.push_back(nota);
    }

    // Calcular la nota final y determinar si aprobó o reprobó el curso
    float notaFinal = calcularNotaFinal(curso);
    std::string resultado = determinarAprobacion(notaFinal);

    // Mostrar resultados
    std::cout << "\nResultado del curso:" << std::endl;
    std::cout << "Materia: " << curso.nombreMateria << std::endl;
    std::cout << "Paralelo: " << curso.paralelo << std::endl;
    std::cout << "Docente: " << curso.nombreDocente << std::endl;
    std::cout << "Nota final: " << notaFinal << std::endl;
    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}
