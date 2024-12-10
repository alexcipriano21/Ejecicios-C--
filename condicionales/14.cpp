#include <iostream>
using namespace std;

int main(){
    int num;
    double mon;
    cout<<"Numero de Tarjeta: "; cin >> num;
    cout<<"Monto de Compra: "; cin >> mon;
    double des;
    if (num % 2 == 0 && num >= 100) {
        des=mon*0.15;
    }else{
        des=mon*0.05;
    }
    double tot=mon-des;
    cout<<"Descuento: "<<des<<endl;
    cout<<"Total a Pagar: "<<tot<<endl;
    return 0;
}
