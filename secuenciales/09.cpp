#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int numero, c1, c2, c3, c4;

    cout << "Ingrese un numero: "; cin >> numero;

    c1 = numero / 1000; numero %= 1000;
    c2 = numero / 100; numero %= 100;   
    c3 = numero / 10;                  
    c4 = numero % 10;                 

    printf("Suma de los dígitos: %d\n", (c1 + c2 + c3 + c4));

    return 0;
}
