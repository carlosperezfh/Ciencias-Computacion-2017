
#ifndef EQUIPOS_H_INCLUDED
#define EQUIPOS_H_INCLUDED
#include "player.h"

class Equipos
{
    public:
        string nombre;
        int tam;

        Equipos(int tam);

        ~Equipos();

        //void addplayer();  // usar templates

        Jugador *jugadores;
        //vector<Jugador> vEquiA;
        void reload(int);
        int getTam();
        //vector<T> vEquiB;

    protected:
        //string *puntero;
};




#endif // EQUIPOS_H_INCLUDED
