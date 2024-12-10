#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
    double pies, pulgadas;

    cout << "Pies: "; cin >> pies;
    cout << "Pulgadas: "; cin >> pulgadas;

    double totalMetros = (pies * 0.3048) + (pulgadas * 0.0254);
    printf("Estatura en metros: %.2f m\n", totalMetros);

    return 0;
}
