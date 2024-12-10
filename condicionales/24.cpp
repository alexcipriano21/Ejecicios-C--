#include <iostream>

using namespace std;

int main() {
    double ventas;
    double sueldo;

    cout << "Ingrese las ventas totales: ";cin >> ventas;

    sueldo = ventas * 0.10;

    if (ventas > 5000) {
        double exceso = ventas - 5000;
        sueldo += (exceso / 500) * 25;
    }

    cout << "Sueldo: " << sueldo << endl;

    return 0;
}
