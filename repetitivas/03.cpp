#include <iostream>
#include <stdio.h>
#include <cmath>   
using namespace std;

int main() 
{
    int numero1, numero2;

    cout << "Número 1: "; cin >> numero1;
    cout << "Número 2: "; cin >> numero2;

    int resultado = 0;

    for (int i = 0; i < abs(numero2); i++) {
        resultado += numero1;
    }

    if (numero2 < 0) {
        resultado = -resultado;
    }

    printf("Resultado de la multiplicación: %d\n", resultado);

    return 0;
}
