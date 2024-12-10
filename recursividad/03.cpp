#include <iostream>
#include <cmath>
using namespace std;

int multiplicar(int numero1, int numero2, int resultado = 0) {
    if (abs(numero2) == 0) {
        return resultado;
    }

    if (numero2 > 0) {
        return multiplicar(numero1, numero2 - 1, resultado + numero1);
    } else {
        return multiplicar(numero1, numero2 + 1, resultado - numero1);
    }
}

int main() 
{
    int numero1, numero2;

    cout << "Número 1: "; cin >> numero1;
    cout << "Número 2: "; cin >> numero2;

    int resultado = multiplicar(numero1, numero2);

    cout << "Resultado de la multiplicación: " << resultado << endl;

    return 0;
}
