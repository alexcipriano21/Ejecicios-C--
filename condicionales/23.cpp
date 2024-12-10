#include <iostream>
#include <string>

using namespace std;

int main() {
    double notaMatematicas, notaFisica;
    double propina = 0;
    string obsequio = "Sin obsequio";

    cout << "Ingrese la nota de Matemáticas: ";cin >> notaMatematicas;

    cout << "Ingrese la nota de Física: ";cin >> notaFisica;

    if (notaMatematicas > 17) {
        propina += 3;
    } else {
        propina += notaMatematicas * 1;
    }

    if (notaFisica > 15) {
        propina += 2;
    } else {
        propina += notaFisica * 0.50;
    }

    double promedio = (notaMatematicas + notaFisica) / 2;

    if (promedio > 16) {
        obsequio = "Un reloj";
    }

    cout << "Propina total: " << propina << endl;
    cout << "Obsequio: " << obsequio << endl;

    return 0;
}
