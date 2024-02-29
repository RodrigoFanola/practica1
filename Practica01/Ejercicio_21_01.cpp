// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 21
// Problema planteado: Ayude a esta ama de casa a obtener el total de sus comprar, luego de llenar el carrito de manos con todos los artículos de primera necesidad.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definir la estructura de datos para los artículos
struct Articulo {
    string nombre;
    float precio;
    int cantidad;
};

int main() {
    // Definir un vector de artículos
    vector<Articulo> carrito;

    // Leer los artículos hasta que la ama de casa decida salir
    while (true) {
        // Declarar variables para guardar la entrada del usuario
        string nombre;
        float precio;
        int cantidad;

        // Pedir el nombre del artículo al usuario
        cout << "Nombre del articulo (o 'salir' para terminar): ";
        getline(cin, nombre);

        // Salir del bucle si el usuario ingresa "salir"
        if (nombre == "salir") {
            break;
        }

        // Pedir el precio del artículo al usuario
        cout << "Precio del articulo: ";
        cin >> precio;

        // Pedir la cantidad del artículo al usuario
        cout << "Cantidad del articulo: ";
        cin >> cantidad;

        // Agregar el artículo al carrito
        carrito.push_back({nombre, precio, cantidad});

        // Limpiar el buffer de entrada
        cin.ignore();
    }

    // Calcular el total de la compra
    float total = 0;
    for (const auto& articulo : carrito) {
        total += articulo.precio * articulo.cantidad;
    }

    // Mostrar el total de la compra
    cout << "Total de la compra: " << total << " Bs" << endl;

    return 0;
}