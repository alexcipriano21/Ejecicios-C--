#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() 
{
    string numero, numeroReves;

    cout << "Ingrese un numero: "; cin >> numero;

    for (int i = numero.length() - 1; i >= 0; i--)
        numeroReves += numero[i];

    cout << "Número al revés: " << numeroReves << endl;
    return 0;
}
