// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 17
// Problema planteado: El precio de cada computadora es un valor que el usuario ingrese desde el teclado. 

#include <iostream>

int main() {
    // Definir una variable entera para almacenar el número de computadoras y otra variable para almacenar el precio de cada computadora
    int cantidadComputadoras;
    double precioComputadora;

    // Solicitar al usuario que ingrese el número de computadoras y el precio de cada computadora y almacenarlos en las variables correspondientes
    std::cout << "Ingrese el número de computadoras que desea comprar: ";
    std::cin >> cantidadComputadoras;

    std::cout << "Ingrese el precio de cada computadora: ";
    std::cin >> precioComputadora;

    // Calcular el total de la compra multiplicando el número de computadoras por el precio de cada computadora
    double totalCompra = cantidadComputadoras * precioComputadora;

    // Aplicar el descuento correspondiente según la cantidad de computadoras compradas
    double descuento;
    if (cantidadComputadoras < 5) {
        descuento = totalCompra * 0.10;
    } else if (cantidadComputadoras < 10) {
        descuento = totalCompra * 0.20;
    } else {
        descuento = totalCompra * 0.40;
    }

    // Calcular el total a pagar restando el descuento del total de la compra
    double totalPagar = totalCompra - descuento;

    // Mostrar el total de la compra, el descuento y el total a pagar al usuario
    std::cout << "El total de la compra es: " << totalCompra << std::endl;
    std::cout << "El descuento aplicado es: " << descuento << std::endl;
    std::cout << "El total a pagar es: " << totalPagar << std::endl;

    return 0;
}