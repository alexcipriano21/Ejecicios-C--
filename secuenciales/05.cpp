#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
    int gigabytes;

    cout << "Ingrese la cantidad de Gigabytes: "; cin >> gigabytes;

    int megabytes = gigabytes * 1024;
    int kilobytes = megabytes * 1024;
    int bytes = kilobytes * 1024;

    printf("Megabytes: %d\n", megabytes);
    printf("Kilobytes: %d\n", kilobytes);
    printf("Bytes: %d\n", bytes);

    return 0;
}
