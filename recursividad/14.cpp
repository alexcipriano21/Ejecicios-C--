#include <iostream>
using namespace std;

bool esPrimo(int numero, int divisor) {
    if (divisor > numero / 2) {
        return true;
    }
    if (numero % divisor == 0) {
        return false;
    }
    return esPrimo(numero, divisor + 1);
}

int main() {
    int numero;
    cout << "Ingrese un número: ";cin >> numero;

    if (numero <= 1) {
        cout << numero << " no es un número primo." << endl;
    } else if (esPrimo(numero, 2)) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}
