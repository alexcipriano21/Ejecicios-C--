#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() 
{
    double notas[5], max1, max2, max3, promedio;

    cout << "Ingrese las 5 notas:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nota " << (i + 1) << ": "; 
        cin >> notas[i];
    }

    max1 = fmax(fmax(notas[0], notas[1]), fmax(notas[2], fmax(notas[3], notas[4])));
    max2 = -INFINITY;
    max3 = -INFINITY;

    for (int i = 0; i < 5; i++) {
        if (notas[i] != max1) max2 = fmax(max2, notas[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        if (notas[i] != max1 && notas[i] != max2) max3 = fmax(max3, notas[i]);
    }

    promedio = (max1 + max2 + max3) / 3;
    cout << "El promedio de las tres notas más altas es: " << promedio << endl;

    return 0;
}
