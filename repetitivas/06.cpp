#include <iostream>
using namespace std;

int main() {
    int n, x, y;

    cout << "Ingrese el número: "; cin >> n;
    cout << "Ingrese el valor inicial de la tabla: "; cin >> x;
    cout << "Ingrese el valor final de la tabla: "; cin >> y;

    if (x > y) {
        cout << "El valor inicial (x) debe ser menor o igual al valor final (y)." << endl;
        return 1;
    }

    cout << "Tabla de multiplicar del número " << n << " desde " << x << " hasta " << y << ":" << endl;

    for (int i = x; i <= y; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
