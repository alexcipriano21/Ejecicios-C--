#include <iostream>
using namespace std;

int main() {
    int examenesAprobados, propinaTotal;
    const int propinaBase = 20;
    const int propinaPorExamen = 5;

    cout << "Ingrese la cantidad de Exámenes Aprobados: ";
    cin >> examenesAprobados;

    if (examenesAprobados < 0) {
        cout << "La cantidad de exámenes aprobados no puede ser negativa." << endl;
    } else {
        propinaTotal = propinaBase + (examenesAprobados * propinaPorExamen);
        cout << "La Propina Total es: " << propinaTotal << endl;
    }

    return 0;
}
