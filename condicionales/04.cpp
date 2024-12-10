#include <iostream>
using namespace std;

int main() {
    double prac1, prac2, prac3, promF;

    cout << "Ingrese la Nota de la Práctica 1: ";cin >> prac1;
    cout << "Ingrese la Nota de la Práctica 2: ";cin >> prac2;
    cout << "Ingrese la Nota de la Práctica 3: ";cin >> prac3;

    if (prac3 >= 10) {
        prac3 += 2;
    }

    promF = (prac1 + prac2 + prac3) / 3;
    cout << "El Promedio Final es: " << promF << endl;

    return 0;
}
