#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int metros;
    
    cout << "Metros: ";
    cin >> metros;

    double centimetros = metros * 100;
    double pulgadas = centimetros / 2.54;
    double pies = pulgadas / 12;
    double yardas = pies / 3;

    cout << fixed << setprecision(2); 
    cout << "Centimetros: " << centimetros << endl;
    cout << "Pulgadas: " << pulgadas << endl;
    cout << "Pies: " << pies << endl;
    cout << "Yardas: " << yardas << endl;

    return 0;
}
