#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long factorial = 1;

    cout << "Ingrese un número para calcular su factorial: "; cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
        return 1;
    }

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
