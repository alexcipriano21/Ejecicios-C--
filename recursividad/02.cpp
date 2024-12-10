#include <iostream>
using namespace std;

int multiplicar(int multiplicando, int multiplicador) {
    if (multiplicador == 1) {
        return multiplicando;
    }

    return multiplicando + multiplicar(multiplicando, multiplicador - 1);
}

int main() {
    int multiplicando, multiplicador;

    cout << "Multiplicando: "; cin >> multiplicando;
    cout << "Multiplicador: "; cin >> multiplicador;

    int resultado = multiplicar(multiplicando, multiplicador);
    
    cout << "Resultado: " << resultado << endl;

    return 0;
}
