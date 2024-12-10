#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() 
{
    int a, b, c;
    int discriminante, raiz1, raiz2;

    cout << "Ingrese el coeficiente a: "; cin >> a;
    cout << "Ingrese el coeficiente b: "; cin >> b;
    cout << "Ingrese el coeficiente c: "; cin >> c;

    discriminante = pow(b, 2) - 4 * a * c;

    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las raíces reales son: " << raiz1 << " y " << raiz2 << endl;
    }
    else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        cout << "La raíz única es: " << raiz1 << endl;
    }
    else {
        cout << "La ecuación no tiene soluciones reales." << endl;
    }

    return 0;
}
