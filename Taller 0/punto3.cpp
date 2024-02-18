#include <iostream>
using namespace std;

int main(){

    int sueldo;
    cout<<"Ingrese su salario: ";
    cin>>sueldo;

    if(sueldo<1000000){
        sueldo=sueldo+(sueldo*0.15);
    }
    cout<<"Su nuevo sueldo es de: "<<sueldo;

    return 0;
}