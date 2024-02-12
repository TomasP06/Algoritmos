
#include <iostream>
#include <cstdlib> 


using namespace std;

int main(){
    int eleccionJugador;
    cout<<"Elija: \n 1 para piedra \n 2 para papel \n 3 para tijera"<<endl;
    cin>>eleccionJugador;

    int numeroAleatorio = rand() % 3 + 1;

    string eleccionAleatoria;
    if (numeroAleatorio==1){
        eleccionAleatoria = "Piedra";
    }
    else if (numeroAleatorio==2){
        eleccionAleatoria="Papel";
    }
    else if (numeroAleatorio==3){
        eleccionAleatoria="Tijera";
    }

    string usuario;
    if (eleccionJugador==1){
        usuario = "Piedra";
    }
    else if (eleccionJugador==2){
        usuario="Papel";
    }
    else if (eleccionJugador==3){
        usuario="Tijera";
    }

     if (usuario == eleccionAleatoria) {
        cout << "¡Empate!" << endl;
    } else if ((usuario == "Piedra" && eleccionAleatoria == "Tijera") ||
               (usuario == "Papel" && eleccionAleatoria == "Piedra") ||
               (usuario == "Tijera" && eleccionAleatoria == "Papel")) {
        cout << "¡Usted gana!" << endl;
    } else {
        cout << "¡La computadora gana!" << endl;
    }






    return 0;
}
