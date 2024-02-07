#include <iostream>
using namespace std;

int main(){
    int resp_cara=0;
    int respuesta;

    cout<<"0 para cara \n 1 para sello: ";
    cin>>respuesta;

    if (respuesta==resp_cara){
        cout<<"Gano!";
    }
    else{
        cout<<"Perdio :(";
    }

    return 0;
}