#include <iostream>
using namespace std;

int main() {
    double montoDonacion, centroSalud, comedorNinos, inversionBolsa;

    cout << "Monto de Donacion: ";
    cin >> montoDonacion;

    if (montoDonacion >= 10000) {
        centroSalud = montoDonacion * 0.30;
        comedorNinos = montoDonacion * 0.50;
        inversionBolsa = montoDonacion - (centroSalud + comedorNinos);
    } else {
        centroSalud = montoDonacion * 0.25;
        comedorNinos = montoDonacion * 0.60;
        inversionBolsa = montoDonacion - (centroSalud + comedorNinos);
    }

    cout << "Centro de Salud: " << centroSalud << endl;
    cout << "Comedor de Ninos: " << comedorNinos << endl;
    cout << "Inversion en Bolsa: " << inversionBolsa << endl;

    return 0;
}
