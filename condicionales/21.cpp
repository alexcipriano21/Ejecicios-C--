#include <iostream>
#include <string>

using namespace std;

int main() {
    int numeroEmpleado;
    string estadoCivil, sexo;
    int edad;
    cout << "Ingrese el Número de Empleado: ";cin >> numeroEmpleado;
    if (numeroEmpleado < 1000 || numeroEmpleado > 9999) {
        cout << "Número inválido." << endl;
        return 0;
    }

    int estadoCivilCodigo = (numeroEmpleado / 1000) % 10;
    edad = (numeroEmpleado / 10) % 100;
    int sexoCodigo = numeroEmpleado % 10;

    switch (estadoCivilCodigo) {
        case 1:
            estadoCivil = "Soltero";
            break;
        case 2:
            estadoCivil = "Casado";
            break;
        case 3:
            estadoCivil = "Divorciado";
            break;
        case 4:
            estadoCivil = "Viudo";
            break;
        default:
            estadoCivil = "Desconocido";
            break;
    }

    switch (sexoCodigo) {
        case 1:
            sexo = "Masculino";
            break;
        case 2:
            sexo = "Femenino";
            break;
        default:
            sexo = "Desconocido";
            break;
    }

    cout << "Estado Civil: " << estadoCivil << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;

    return 0;
}
