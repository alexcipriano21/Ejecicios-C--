#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
    int dividendo, divisor, cociente = 0, resto;

    cout << "Dividendo: "; cin >> dividendo;
    cout << "Divisor: "; cin >> divisor;

    if (divisor == 0) {
        cout << "Error: División por cero no permitida." << endl;
        return 1;
    }

    resto = dividendo;

    for (; resto >= divisor; resto -= divisor, cociente++);

    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}
