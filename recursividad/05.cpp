#include <iostream>
using namespace std;

void tablaMultiplicar(int n, int i = 1) {
    if (i > 12) {
        return;
    }
    
    cout << n << " x " << i << " = " << n * i << endl;
    tablaMultiplicar(n, i + 1);
}

int main() 
{
    int n;
    cout << "Ingrese un número: "; cin >> n;
    cout << "Tabla de multiplicar del número " << n << ":" << endl;

    tablaMultiplicar(n);

    return 0;
}
