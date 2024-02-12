#include <iostream>
#include <cstdlib> 


using namespace std;

int main(){
    int turnos;
    cout<<"Cuantos turnos?: ";
    cin>>turnos;
    
    for (int i=0;i<turnos;i++){
        
         int eleccionComputadora = rand() % 6 + 1;
         
         int eleccionUsuario = rand() % 6 + 1;
         
         if(eleccionUsuario<eleccionComputadora){
             cout<<"Perdio"<<endl;
             
         }
        else{
            cout<<"Gano!"<<endl;
        }
         }
    
    
return 0;
}
