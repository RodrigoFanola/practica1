// Materia: Programación I, Paralelo 1
// Autor: Rodrigo Andres Fanola Illanes
// Fecha creación: 27/02/2024
// Número de ejercicio: 30
// Problema planteado: Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el total de ventas efectuadas y el total de ventas con el descuento respectivo.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de clientes: ";
    cin >> n;

    vector<double> ventas(n);
    double totalVentas = 0;
    double totalVentasConDescuento = 0;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el total de ventas para el cliente " << i+1 << ": ";
        cin >> ventas[i];
        totalVentas += ventas[i];

        double descuento = 0;
        if (ventas[i] >= 500) {
            descuento = 0.08 * ventas[i];
        } else if (ventas[i] >= 100) {
            descuento = 0.05 * ventas[i];
        }
        totalVentasConDescuento += ventas[i] - descuento;
    }

    cout << "Total de ventas sin descuento: " << totalVentas << " Bs." << endl;
    cout << "Total de ventas con descuento: " << totalVentasConDescuento << " Bs." << endl;

    return 0;
}