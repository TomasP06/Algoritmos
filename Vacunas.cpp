#include <iostream>
using namespace std;

int main(){
    float pesoBb;
    int mesesBb;
    float dosisVacuna=0;

    cout<<"Ingrese peso del bebe: "<<endl;
    cin>>pesoBb;
    cout<<"Ingrese meses del bebe; "<<endl;
    cin>>mesesBb;

    dosisVacuna=((pesoBb+10)/(mesesBb*10))*8;

    cout<<"La dosis de la vacuna es de: "<<dosisVacuna;


    return 0;
}