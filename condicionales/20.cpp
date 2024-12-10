#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    string resultado;

    cout << "Número A: ";cin >> a;
    cout << "Número B: ";cin >> b;
    cout << "Número C: ";cin >> c;

    if (a < b && b < c) {
        resultado = "Ascendente";
    } else if (a > b && b > c) {
        resultado = "Descendente";
    } else {
        resultado = "Desordenado";
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
