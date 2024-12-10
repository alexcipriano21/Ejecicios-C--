    #include <iostream>
    using namespace std;

    int main() {
        int num1, num2, num3, intermedio;

        cout << "Ingrese el Número 1: ";cin >> num1;
        cout << "Ingrese el Número 2: ";cin >> num2;
        cout << "Ingrese el Número 3: ";cin >> num3;

        if (num1 > num2) {
            intermedio = (num1 < num3) ? num1 : ((num2 > num3) ? num2 : num3);
        } else {
            intermedio = (num2 < num3) ? num2 : ((num1 > num3) ? num1 : num3);
        }
        cout << "El número intermedio es: " << intermedio << endl;
        return 0;
    }
