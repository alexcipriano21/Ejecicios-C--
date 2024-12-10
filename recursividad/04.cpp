#include <iostream>
using namespace std;

void mostrarMultiplos(int n, int m, int i = 1) {
    if (i > m) {
        return;
    }
    
    cout << n * i << " "; mostrarMultiplos(n, m, i + 1);
}

int main() 
{
    int n, m;

    cout << "Ingrese el número: "; cin >> n;
    cout << "Ingrese la cantidad de múltiplos: "; cin >> m;
    cout << "Los " << m << " múltiplos de " << n << " son:" << endl;

    mostrarMultiplos(n, m); cout << endl;

    return 0;
}
