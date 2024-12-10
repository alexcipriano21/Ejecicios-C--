#include <iostream>
using namespace std;

int main(){
    int imen, cos;
    cout<<"Ingreso Mensual: ";cin>>imen;
    cout<<"Costo de la casa: ";cin>>cos;
    int ini,cmen;
    if (imen<1250){
        ini=cos*0.15;
        cmen=(cos-ini)/120;
    }else{
        ini=cos*0.30;
        cmen=(cos-ini)/75;
    }
    cout<<"Cuota Inicial: "<<ini<<endl;
    cout<<"Cuota Mensual: "<<cmen<<endl;
    return 0;
}