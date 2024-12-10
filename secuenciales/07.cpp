#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
    int base, altura;

    cout << "Ingrese la base: "; cin >> base;
    cout << "Ingrese la altura: "; cin >> altura;

    double area = base * altura;
    double perimetro = 2 * (base + altura);

    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);

    return 0;
}
