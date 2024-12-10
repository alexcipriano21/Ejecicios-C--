#include <iostream>
#include <string>
using namespace std;

int main() {
    string sexo, categoria;
    int edad;
    cout << "Sexo (F/M): ";cin >> sexo;
    cout << "Edad: ";cin >> edad;
    if (sexo == "F" || sexo == "f") {
        if (edad < 23) {
            categoria = "FA";
        } else {
            categoria = "FB";
        }
    } else if (sexo == "M" || sexo == "m") {
        if (edad < 25) {
            categoria = "MA";
        } else {
            categoria = "MB";
        }
    } else {
        categoria = "Sexo inválido";
    }
    cout << "Categoría: " << categoria << endl;
    return 0;
}
