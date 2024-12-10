#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void clasificarAngulo(double angulo) {
    string clasificacion;
    if (angulo == 0) {
        clasificacion = "Nulo";
    } else if (angulo > 0 && angulo < 90) {
        clasificacion = "Agudo";
    } else if (angulo == 90) {
        clasificacion = "Recto";
    } else if (angulo > 90 && angulo < 180) {
        clasificacion = "Obtuso";
    } else if (angulo == 180) {
        clasificacion = "Llano";
    } else if (angulo > 180 && angulo < 360) {
        clasificacion = "Cóncavo";
    } else if (angulo == 360) {
        clasificacion = "Completo";
    } else {
        clasificacion = "Ángulo inválido";
    }
    cout << "Clasificación: " << clasificacion << endl;
}

int main() {
    double angulo;
    cout << "Ingrese el ángulo: ";cin >> angulo;
    clasificarAngulo(angulo);
    return 0;
}
