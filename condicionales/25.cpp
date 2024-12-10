#include <iostream>
using namespace std;

int main() {
    double sueldoBruto, bonificacion, sueldoNeto;
    int numeroHijos;

    cout << "Ingrese el Sueldo Bruto: ";cin >> sueldoBruto;
    cout << "Ingrese el Numero de Hijos: ";cin >> numeroHijos;

    if (numeroHijos > 1) {
        bonificacion = sueldoBruto * 0.125 + (40 * numeroHijos);
    } else {
        bonificacion = sueldoBruto * 0.10;
    }

    sueldoNeto = sueldoBruto + bonificacion;

    cout << "Bonificacion: " << bonificacion << endl;
    cout << "Sueldo Neto: " << sueldoNeto << endl;

    return 0;
}
