#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
    int kilometros, pies, millas;

    cout << "Kilometros: "; cin >> kilometros;
    cout << "Pies: "; cin >> pies;
    cout << "Millas: "; cin >> millas;

    double totMetros = (kilometros * 1000) + (pies / 3.2808) + (millas * 1609);
    double totYardas = totMetros * 1.09361;

    printf("Total en Metros = %.2f m\n", totMetros);
    printf("Total en Yardas = %.2f yd\n", totYardas);

    return 0;
}
