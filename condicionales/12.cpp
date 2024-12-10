#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;
    string dias[] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};

    cout << "Número: "; cin >> numero;
    if (numero >= 1 && numero <= 7) 
        cout << "Día: " << dias[numero - 1] << endl;
    else cout << "Error" << endl;

    return 0;
}
