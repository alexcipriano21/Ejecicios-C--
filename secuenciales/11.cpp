#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() 
{
    string numero1, numero2, resultado1, resultado2;

    cout << "Ingrese el primer número: "; cin >> numero1;
    cout << "Ingrese el segundo número: "; cin >> numero2;

    char primeraCifra1 = numero1[0];
    char segundaCifra1 = numero1[1];
    char terceraCifra1 = numero1[2];

    char primeraCifra2 = numero2[0];
    char segundaCifra2 = numero2[1];
    char terceraCifra2 = numero2[2];

    resultado1 = primeraCifra2 + string(1, segundaCifra1) + terceraCifra2;
    resultado2 = primeraCifra1 + string(1, segundaCifra2) + terceraCifra1;

    printf("Primer resultado: %s\n", resultado1.c_str());
    printf("Segundo resultado: %s\n", resultado2.c_str());

    return 0;
}
