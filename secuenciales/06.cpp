#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main() 
{
    int altura, radio;

    cout << "Ingrese la altura: "; cin >> altura;
    cout << "Ingrese el radio: "; cin >> radio;

    double area = 2 * M_PI * radio * (radio + altura);
    double volumen = M_PI * pow(radio, 2) * altura;

    printf("Area: %.2f\n", area);
    printf("Volumen: %.2f\n", volumen);

    return 0;
}
