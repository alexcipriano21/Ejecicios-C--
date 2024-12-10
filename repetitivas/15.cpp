#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string inputText;
    cout << "Ingrese un texto: ";
    getline(cin, inputText);

    int i = 0;

    while (i < inputText.length()) {
        if (inputText[i] >= 'a' && inputText[i] <= 'z') {
            inputText[i] = inputText[i] - ('a' - 'A');
        }
        i++;
    }

    cout << "Texto en mayúsculas: " << inputText << endl;

    i = 0;

    while (i < inputText.length()) {
        if (inputText[i] >= 'A' && inputText[i] <= 'Z') {
            inputText[i] = inputText[i] + ('a' - 'A');
        }
        i++;
    }

    cout << "Texto en minúsculas: " << inputText << endl;

    return 0;
}
