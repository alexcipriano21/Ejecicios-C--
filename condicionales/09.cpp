#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigo, unidades;
    double precioUnitario = 0, descuento = 0, importeCompra = 0, montoDescuento = 0, totalPagar = 0;
    cout << "Ingrese el codigo del producto (101, 102, 103, 104): ";cin >> codigo;
    cout << "Ingrese la cantidad de unidades compradas: ";cin >> unidades;

    if (codigo == 101) {
        precioUnitario = 17;
        if (unidades >= 1 && unidades <= 10) {
            descuento = 0.05;
        }
    } else if (codigo == 102) {
        precioUnitario = 25;
        if (unidades >= 11 && unidades <= 20) {
            descuento = 0.08;
        }
    } else if (codigo == 103) {
        precioUnitario = 16;
        if (unidades >= 21 && unidades <= 30) {
            descuento = 0.10;
        }
    } else if (codigo == 104) {
        precioUnitario = 27;
        if (unidades >= 31) {
            descuento = 0.13;
        }
    } else {
        cout << "Codigo invalido" << endl;
        return 0;
    }

    importeCompra = precioUnitario * unidades;
    montoDescuento = importeCompra * descuento;
    totalPagar = importeCompra - montoDescuento;

    cout << "Importe de la compra: " << importeCompra << endl;
    cout << "Descuento aplicado: " << montoDescuento << endl;
    cout << "Total a pagar: " << totalPagar << endl;

    return 0;
}
