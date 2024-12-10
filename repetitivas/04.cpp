#include <iostream>
using namespace std;

int main() 
{
    int n, m;

    cout << "Ingrese el número: "; cin >> n;
    cout << "Ingrese la cantidad de múltiplos: "; cin >> m;
    cout << "Los " << m << " múltiplos de " << n << " son:" << endl;

    for (int i = 1; i <= m; i++) {
        cout << n * i << " ";
    }

    cout << endl;
    return 0;
}
