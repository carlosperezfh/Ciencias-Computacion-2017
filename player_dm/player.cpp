#include "player.h"
Jugador::Jugador(){

}
Jugador::Jugador(int tamj){
    //tamj=tamj_;
    ptrplay=new int[tamj];
    this->tamj=tamj;
}

Jugador::Jugador(string name_, int number_, string position_, int aggressivity_)
{
    name=name_;
    number=number_;
    position=position_;
    aggressivity=aggressivity_;
}

void Jugador::setName(string new_name)
{
    name=new_name;
}

string Jugador::getName()
{
    return name;
}

void Jugador::setNumber(int new_num)
{
    number=new_num;
}

int Jugador::getNumber()
{
    return number;
}
void Jugador::setPosition(string pos)
{
    position=pos;
}

string Jugador::getPosition()
{
    return position;
}

void Jugador::setAggressivity(int new_agre)
{
    aggressivity=new_agre;
}

void Jugador::printj()
{
    //int espacio=int(" ");*********
    cout << name << "    " << number<< "    "<< position <<"  "<<aggressivity << endl;
    //cout <<ptrplay[0,1]<<endl;

}

Jugador::~Jugador(){
    delete ptrplay;
}

/*void Jugador::addplayer()
{
    this->vEquiA.push_back();
}*/
