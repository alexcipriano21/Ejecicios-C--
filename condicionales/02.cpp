#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int uni;
    double precioUnitario = 20.0;
    double imp, des, tot;
    int car;

    cout << "Ingrese la cantidad de unidades: ";cin >> uni;

    imp = uni * precioUnitario;

    if (imp > 700) {
        des = imp * 0.16;
    } else if (imp >= 501) {
        des = imp * 0.14;
    } else {
        des = imp * 0.12;
    }

    tot = imp - des;

    if (uni >= 1 && uni <= 50) {
        car = 5;
    } else if (uni >= 51 && uni <= 100) {
        car = 10;
    } else {
        car = 15;
    }

    cout << fixed << setprecision(2);
    cout << "Importe de la compra: " << imp << endl;
    cout << "Descuento: " << des << endl;
    cout << "Total a pagar: " << tot << endl;
    cout << "Caramelos: " << car << endl;

    return 0;
}
