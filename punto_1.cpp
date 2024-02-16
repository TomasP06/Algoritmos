#include <iostream>
using namespace std;

int main()
{
    int deuda;
    cout<<"Ingrese su deuda: ";

    if(deuda>60000 && deuda<150000){
        deuda=deuda-(deuda*0.2)
        
    }
    else if(deuda>150000 && deuda<300000){
        deuda=deuda-(deuda*0.3)
        
    }
    else if(deuda>300000 && deuda<800000){
        deuda=deuda-(deuda*0.4)
    }
    else if(deuda>800000){
        deuda=deuda-(deuda*0.5)
    }
    cout<<"Debe pagar, despues del descuento: "<<deuda;
    return 0;
}
