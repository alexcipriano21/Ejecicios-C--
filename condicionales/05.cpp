#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un numero de 4 cifras: "; cin >> numero;

    int cifra1 = numero / 1000;
    int cifra2 = (numero / 100) % 10;
    int cifra3 = (numero / 10) % 10;
    int cifra4 = numero % 10;

    int mayor, menor;

    if (cifra1 >= cifra2 && cifra1 >= cifra3 && cifra1 >= cifra4) {
        mayor = cifra1;
    } else if (cifra2 >= cifra1 && cifra2 >= cifra3 && cifra2 >= cifra4) {
        mayor = cifra2;
    } else if (cifra3 >= cifra1 && cifra3 >= cifra2 && cifra3 >= cifra4) {
        mayor = cifra3;
    } else {
        mayor = cifra4;
    }

    if (cifra1 <= cifra2 && cifra1 <= cifra3 && cifra1 <= cifra4) {
        menor = cifra1;
    } else if (cifra2 <= cifra1 && cifra2 <= cifra3 && cifra2 <= cifra4) {
        menor = cifra2;
    } else if (cifra3 <= cifra1 && cifra3 <= cifra2 && cifra3 <= cifra4) {
        menor = cifra3;
    } else {
        menor = cifra4;
    }

    cout << "El mayor numero posible con la mayor y menor cifra es: " << mayor * 10 + menor << endl;

    return 0;
}
