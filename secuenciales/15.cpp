#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {
    double aporteJuan, aporteRosa, aporteDaniel;
    double aporteDanielDolares, capitalTotalDolares;
    double porcentajeJuan, porcentajeRosa, porcentajeDaniel;

    cout << "Ingrese el aporte de Juan (USD): "; cin >> aporteJuan;
    cout << "Ingrese el aporte de Rosa (USD): "; cin >> aporteRosa;
    cout << "Ingrese el aporte de Daniel (S/.): "; cin >> aporteDaniel;

    aporteDanielDolares = aporteDaniel / 3.00;

    capitalTotalDolares = aporteJuan + aporteRosa + aporteDanielDolares;

    porcentajeJuan = (aporteJuan / capitalTotalDolares) * 100;
    porcentajeRosa = (aporteRosa / capitalTotalDolares) * 100;
    porcentajeDaniel = (aporteDanielDolares / capitalTotalDolares) * 100;

    cout << fixed << setprecision(2);
    cout << "Total en dolares: " << capitalTotalDolares << " USD" << endl;
    cout << "Porcentaje Juan: " << porcentajeJuan << " %" << endl;
    cout << "Porcentaje Rosa: " << porcentajeRosa << " %" << endl;
    cout << "Porcentaje Daniel: " << porcentajeDaniel << " %" << endl;

    return 0;
}
