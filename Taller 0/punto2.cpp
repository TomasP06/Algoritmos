#include <iostream>
using namespace std;

int main(){

    int plan;
    int deuda1;
    int deuda2;
    
    cout<<"1 para prepago\n2 para postpago\n";
    cin>>plan;

    if(plan==1){
        cout<<"Ingrese el valor del equipo: ";
        cin>>deuda1;
        if(deuda1>90000 && deuda1<100000){
            deuda1=deuda1-(deuda1 * 0.10);
        }
        else if(deuda1>100000){
            deuda1=deuda1-(deuda1*0.2);
        }
        cout<<"El valor neto que debe pagar es de: "<<deuda1;
    }
    else if(plan==2){
        cout<<"Ingrese el valor del plan: ";
        cin>>deuda2;
        if(deuda2<500000){
            deuda2=deuda2-(deuda2*0.15);
        }
        else if(deuda2>500000 && deuda2<100000){
            deuda2=deuda2-(deuda2*0.2);    
        }
        else if(deuda2>100000){
            deuda2=deuda2-(deuda2*0.25);
        }
        cout<<"El valor neto que debe pagar es de: "<<deuda2;
    }

    return 0;
}