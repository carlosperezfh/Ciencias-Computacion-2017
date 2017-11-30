#ifndef CLASES_H_INCLUDED
#define CLASES_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <fstream>
#include <math.h>
#include <time.h>


using namespace std;

class Equipo{
public:
    Equipo()=default;
    Equipo(int, string);
    Equipo(string,string);
    Equipo(string,string,int);
    ~Equipo();
    void setPJ(int);
    int getPJ();
    void print();
    void printpartidos();
    void printpartidosf();
    string nombreP;
    string nombreP1;
    string nombreP2;
    int fechaN;

protected:
    int pos;
    int PJ;
    int PG;
    int PE;
    int PP;
    int GF;
    int GC;
    int DG;
    int puntaje;
};


class Evento:public Equipo {
public:
    Evento();
    Evento(int,int,int,int);

    ~Evento();
    void printTabla();
    void printTodosLosPartidos();
    void addEquipo(Equipo Eq);
    void llenarvector();
    void borrarfila(int bv);
    void borrarEquiposRepetidos();
    vector<Equipo> escogerEquipo();


    //static int ifec;  //para que sea global
protected:
    int prim_rueda;
    int seg_rueda;
    int num_fechas;
    int num_equipos;

    vector<Equipo> vPartid;
    vector<Equipo> vEqui;  //privado - previa justi
    vector<Equipo> vlistmatch; //contiene los partidos a jugar
    vector<Equipo> PartidoEscogido;
};


class Fixture{
protected:
    vector<Equipo> tuplas;

public:
    Fixture()=default;
};


#endif // FIXTURE2_H_INCLUDED



