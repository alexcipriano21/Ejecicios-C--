#include <iostream>
using namespace std;

double calcularPotencia(double bas, int exp) {
    if (exp == 0) {
        return 1;
    }
    if (exp > 0) {
        return bas * calcularPotencia(bas, exp - 1);
    }
    return 1 / calcularPotencia(bas, -exp);
}

int main() {
    double bas;
    int exp;

    cout << "Ingrese la base: ";cin >> bas;
    cout << "Ingrese el exponente: ";cin >> exp;
    double pot = calcularPotencia(bas, exp);
    cout << "El resultado de " << bas << "^" << exp << " es: " << pot << endl;

    return 0;
}
