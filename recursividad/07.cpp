#include <iostream>
using namespace std;

unsigned long long calcularFactorial(int num) {
    if (num <= 1) {
        return 1;
    }
    return num * calcularFactorial(num - 1);
}

int main() {
    int num;
    cout << "Ingrese un número para calcular su factorial: ";cin >> num;

    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
        return 1;
    }
    unsigned long long factorial = calcularFactorial(num);
    cout << "El factorial de " << num << " es: " << factorial << endl;

    return 0;
}
