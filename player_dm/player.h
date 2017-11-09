#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <math.h>
using namespace std;

class Jugador
{
    public:
         *ptrplay;
        int tamj;

        Jugador();
        Jugador(int tamj);
        Jugador(string, int, string,int);
        ~Jugador();

        void setName(string n);
        string getName();
        void setNumber(int num);
        int getNumber();
        void setPosition(string pos);
        string getPosition();
        void setAggressivity(int a);
        int getAggressivity();
        void printj();


    private:
        string name,position;
        int number,aggressivity;


};


#endif // PLAYER_H_INCLUDED
