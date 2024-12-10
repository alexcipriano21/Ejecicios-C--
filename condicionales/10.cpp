#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3, nota4, nota5;
    double notaMayor, notaMenor, promedio;

    cout << "Ingresa la Nota 1: ";cin >> nota1;
    cout << "Ingresa la Nota 2: ";cin >> nota2;
    cout << "Ingresa la Nota 3: ";cin >> nota3;
    cout << "Ingresa la Nota 4: ";cin >> nota4;
    cout << "Ingresa la Nota 5: ";cin >> nota5;

    if (nota1 >= nota2 && nota1 >= nota3 && nota1 >= nota4 && nota1 >= nota5) {
        notaMayor = nota1;
    } else if (nota2 >= nota1 && nota2 >= nota3 && nota2 >= nota4 && nota2 >= nota5) {
        notaMayor = nota2;
    } else if (nota3 >= nota1 && nota3 >= nota2 && nota3 >= nota4 && nota3 >= nota5) {
        notaMayor = nota3;
    } else if (nota4 >= nota1 && nota4 >= nota2 && nota4 >= nota3 && nota4 >= nota5) {
        notaMayor = nota4;
    } else {
        notaMayor = nota5;
    }

    if (nota1 <= nota2 && nota1 <= nota3 && nota1 <= nota4 && nota1 <= nota5) {
        notaMenor = nota1;
    } else if (nota2 <= nota1 && nota2 <= nota3 && nota2 <= nota4 && nota2 <= nota5) {
        notaMenor = nota2;
    } else if (nota3 <= nota1 && nota3 <= nota2 && nota3 <= nota4 && nota3 <= nota5) {
        notaMenor = nota3;
    } else if (nota4 <= nota1 && nota4 <= nota2 && nota4 <= nota3 && nota4 <= nota5) {
        notaMenor = nota4;
    } else {
        notaMenor = nota5;
    }

    double sumaNotas = nota1 + nota2 + nota3 + nota4 + nota5;
    double sumaMenorYMayor = notaMayor + notaMenor;
    promedio = (sumaNotas - sumaMenorYMayor) / 3;

    cout << "Nota Mayor: " << notaMayor << endl;
    cout << "Nota Menor: " << notaMenor << endl;
    cout << "Promedio Aprobatorio: " << promedio << endl;

    return 0;
}
