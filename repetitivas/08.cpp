#include <iostream>
using namespace std;

int main() {
    double base;
    int exponente;
    double potencia = 1;

    cout << "Ingrese la base: "; cin >> base;
    cout << "Ingrese el exponente: "; cin >> exponente;

    for (int i = 1; i <= abs(exponente); i++) {
        potencia *= base;
    }

    potencia = (exponente < 0) ? 1 / potencia : potencia;

    cout << "El resultado de " << base << "^" << exponente << " es: " << potencia << endl;

    return 0;
}
