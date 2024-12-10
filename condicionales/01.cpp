#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int uni;

    cout << "Cantidad de Unidades: ";cin >> uni;

    double precioUnitario = (uni >= 1 && uni <= 25) ? 27 : 
                            (uni >= 26 && uni <= 50) ? 25 : 23;
    double imp   = uni * precioUnitario;
    double des = (uni > 50) ? (imp * 0.15) : (imp * 0.05);
    double tot = imp - des;

    cout << fixed << setprecision(2);
    cout << "Importe de Compra: " << imp << endl;
    cout << "Descuento: " << des<< endl;
    cout << "Total a Pagar: " << tot << endl;

    return 0;
}
