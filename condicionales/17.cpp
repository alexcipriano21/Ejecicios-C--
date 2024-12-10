#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int docenas, lapiceros;
    double precioUnitario, montoCompra, descuento, totalPagar;
    cout << "Ingresa la cantidad de docenas: ";cin >> docenas;
    cout << "Ingresa el precio unitario: ";cin >> precioUnitario;
    montoCompra = docenas * precioUnitario;

    if (docenas >= 6) {
        descuento = montoCompra * 0.15;
    } else {
        descuento = montoCompra * 0.10;
    }

    totalPagar = montoCompra - descuento;

    if (docenas >= 30) {
        lapiceros = (docenas / 3) * 2;
    } else {
        lapiceros = 0;
    }
    cout << "Monto de compra: S/. " << montoCompra << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Total a pagar: S/. " << totalPagar << endl;
    cout << "Lapiceros de obsequio: " << lapiceros << endl;

    return 0;
}
