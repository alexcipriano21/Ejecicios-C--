#include <iostream>
#include <string>
using namespace std;

void convertirCaso(string &texto, int i, bool aMayusculas) {
    if (i >= texto.length()) {
        return;
    }
    if (aMayusculas && texto[i] >= 'a' && texto[i] <= 'z') {
        texto[i] = texto[i] - ('a' - 'A');
    } else if (!aMayusculas && texto[i] >= 'A' && texto[i] <= 'Z') {
        texto[i] = texto[i] + ('a' - 'A');
    }
    convertirCaso(texto, i + 1, aMayusculas);
}

int main() {
    string inputText;
    cout << "Ingrese un texto: ";
    getline(cin, inputText);

    convertirCaso(inputText, 0, true);
    cout << "Texto en mayúsculas: " << inputText << endl;

    convertirCaso(inputText, 0, false);
    cout << "Texto en minúsculas: " << inputText << endl;

    return 0;
}
