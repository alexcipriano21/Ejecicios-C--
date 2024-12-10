#include <iostream>
using namespace std;

void imprimirTabla(int n, int x, int y) {
    if (x > y) {
        return;
    }
    cout << n << " x " << x << " = " << n * x << endl;
    imprimirTabla(n, x + 1, y);
}

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
    imprimirTabla(n, x, y);

    return 0;
}
