#ifndef FIXTURE2_H_INCLUDED
#define FIXTURE2_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <fstream>
//#include <conio>
#include <math.h>
using namespace std;

class Equipos
{
    public:
        Equipos(int, string,int,int,int,int,int,int,int,int);
        Equipos(string,string);
        ~Equipos();
        void setPJ(int);
        int getPJ();
        void print();
        void printpartidos();
        string nombreP;
        string nombreP1;
        string nombreP2;
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
        //string *puntero;

};

template<class T>
class fecha //: public Equipos
{
    public:
        vector<T> vEqui;
        vector<T> vlistmatch;
        fecha();
        ~fecha();
        void printtabla();
        void addEquipo(T Eq);
        void generar_vector();
        void generar_partidos();
        void llenarvector(T llv);
        void borrarfila(int bv);

        //static int ifec;  //para que sea global
        //friend class partido;
        //friend class listapartidos;
    protected:
        int num_fechas;
        int prim_rueda;
        int seg_rueda;
        int num_equipos;
        int *Fechanum;
        vector<T> vPartid;

};


class partido
{
    protected:
        char equi1[10];
        char equi2[10];
    public:
        partido(char [],char []);
        ~partido();
        void generar_partidos();
        void printpartidos();
};

template<class T>
class listapartidos
{
    public:
        listapartidos();
        ~listapartidos();


    protected:
        int tot_equi;
        int tot_part_bru;
        int partidos[100][2];
};


#endif // FIXTURE2_H_INCLUDED



