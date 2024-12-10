#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
    string cateto1Str, cateto2Str;
    double cateto1, cateto2, hipotenusa;

    cout << "Ingrese el valor del Cateto 1: "; cin >> cateto1Str;
    cateto1 = stod(cateto1Str);
    cout << "Ingrese el valor del Cateto 2: "; cin >> cateto2Str;
    cateto2 = stod(cateto2Str);  
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); 

    cout << "La hipotenusa es: " << hipotenusa << endl;
    return 0;
}
