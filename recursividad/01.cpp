#include <iostream>
using namespace std;

int dividir(int dividendo, int divisor, int cociente = 0) {
    if (dividendo < divisor) {
        return cociente;
    }
    return dividir(dividendo - divisor, divisor, cociente + 1);
}

int main() {
    int dividendo, divisor;

    cout << "Dividendo: "; cin >> dividendo;
    cout << "Divisor: "; cin >> divisor;

    if (divisor == 0) {
        cout << "Error: División por cero no permitida." << endl;
        return 1;
    }

    int cociente = dividir(dividendo, divisor);
    int resto = dividendo - (cociente * divisor);

    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}
