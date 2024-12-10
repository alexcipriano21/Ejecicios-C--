#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Ingrese un número: "; cin >> n;
    cout << "Tabla de multiplicar del número " << n << ":" << endl;

    for (int i = 1; i <= 12; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
