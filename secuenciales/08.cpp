#include <iostream>
#include <cmath> 
#include <stdio.h>

using namespace std;

int main() 
{
    int radio, altura;

    cout << "Ingrese el radio: "; cin >> radio;
    cout << "Ingrese la altura: "; cin >> altura;

    double areaBase = M_PI * pow(radio, 2);
    double areaLateral = 2 * M_PI * radio * altura;
    double areaTotal = 2 * areaBase + areaLateral;

    printf("Área de la base: %.2f\n", areaBase);
    printf("Área lateral: %.2f\n", areaLateral);
    printf("Área total: %.2f\n", areaTotal);

    return 0;
}

