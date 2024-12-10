#include <iostream>
using namespace std;

int main() {
    int numero, cifra1, cifra2, cifra3;
    cout << "Ingresa un número de 3 cifras: ";cin >> numero;

    if (numero < 100 || numero > 999) {
        cout << "Ingrese un número de 3 cifras." << endl;
        return 0;
    }

    cifra1 = numero / 100;
    cifra2 = (numero / 10) % 10;
    cifra3 = numero % 10;

    if ((cifra1 + 1 == cifra2 && cifra2 + 1 == cifra3) || 
        (cifra1 - 1 == cifra2 && cifra2 - 1 == cifra3)) {
        cout << "Las cifras son consecutivas." << endl;
    } else {
        cout << "Las cifras NO son consecutivas." << endl;
    }

    return 0;
}
