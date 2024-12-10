#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int numero;
    
    cout << "Número: "; cin >> numero;

    if ( numero > 0 ) cout<<"Positivo";
    else if ( numero <0 ) cout<<"Negativo";
    else cout<<"Cero";
    /*
    cout<<( numero > 0 ? "Positivo" : numero < 0 ? "Negativo" : "Cero");
    */

    return 0;
}
