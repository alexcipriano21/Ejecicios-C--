#include <iostream>
using namespace std;

int main() {
    int edad1, edad2, edad3;

    cout << "Ingrese la primera edad: "; cin >> edad1;
    cout << "Ingrese la segunda edad: "; cin >> edad2;
    cout << "Ingrese la tercera edad: "; cin >> edad3;

    int mayor, menor;

    if (edad1 >= edad2 && edad1 >= edad3) {
        mayor = edad1;
    } else if (edad2 >= edad1 && edad2 >= edad3) {
        mayor = edad2;
    } else {
        mayor = edad3;
    }

    if (edad1 <= edad2 && edad1 <= edad3) {
        menor = edad1;
    } else if (edad2 <= edad1 && edad2 <= edad3) {
        menor = edad2;
    } else {
        menor = edad3;
    }

    cout << "La edad mayor es: " << mayor << endl;
    cout << "La edad menor es: " << menor << endl;

    return 0;
}
