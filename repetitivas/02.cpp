#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() 
{
    int multiplicando, multipliucador;

    cout << "Multiplicando: "; cin >> multiplicando;
    cout << "Multiplicador: "; cin >> multipliucador;

    for (int n = multiplicando; multipliucador-->1; multiplicando+=n);
    
    cout << "Resultado: " << multiplicando << endl;

    return 0;
}
