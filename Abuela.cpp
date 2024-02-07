#include <iostream>
using namespace std;

int main(){
    float celcius=0;
    int grados;
    cout<<"Ingrese temperatura en grados fahrenheit: ";
    cin>>grados;
    celcius=(grados-32)/1.8;

    cout<<"La temperatura es de: "<<celcius<<" Grados celcius";

    return 0;
}