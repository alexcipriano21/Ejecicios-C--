#include <iostream>

using namespace std;

int main() {
    int unidadesA, unidadesB;
    double precioA = 25, precioB = 30;
    double descuentoA = 0.15, descuentoB = 0.10;
    double importeBrutoA, importeBrutoB, importeBrutoTotal;
    double descuentoTotal = 0, totalPagar;

    cout << "Ingrese las unidades de Producto A: ";cin >> unidadesA;
    cout << "Ingrese las unidades de Producto B: ";cin >> unidadesB;

    importeBrutoA = unidadesA * precioA;
    importeBrutoB = unidadesB * precioB;
    importeBrutoTotal = importeBrutoA + importeBrutoB;

    if (unidadesA > 50) {
        descuentoTotal += importeBrutoA * descuentoA;
    }

    if (unidadesB > 60) {
        descuentoTotal += importeBrutoB * descuentoB;
    }

    totalPagar = importeBrutoTotal - descuentoTotal;

    cout << "Importe Bruto: " << importeBrutoTotal << endl;
    cout << "Descuento: " << descuentoTotal << endl;
    cout << "Total a Pagar: " << totalPagar << endl;

    return 0;
}
