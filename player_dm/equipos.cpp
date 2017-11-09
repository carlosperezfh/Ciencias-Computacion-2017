#include "equipos.h"
#include "player.h"
Equipos::Equipos(int tam){
    jugadores=new Jugador[tam];
    this->tam=tam;
}

void Equipos::reload(int new_Tam)
{
    tam=new_Tam;
    delete[] jugadores;
    jugadores = new Jugador[tam];

    //jugadores[tam];
}
int Equipos::getTam()
{
    return tam;
}


Equipos::~Equipos(){
    delete[] jugadores;
}




