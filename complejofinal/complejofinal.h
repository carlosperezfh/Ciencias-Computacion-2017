#ifndef COMPLEJOFINAL_H_INCLUDED
#define COMPLEJOFINAL_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <fstream>
#include <conio.h>
#include <math.h>
using namespace std;

class complejo{
    private:
        double real;
        double imag;
    public:
        complejo();
        complejo(double,double im=0.0);
        void SetData(void);
        void SetReal(double);
        void SetImag(double);
        double GetReal(void){return real;}
        double GetImag(void){return imag;}

        complejo Suma(complejo c);
        complejo Resta(complejo c);
        complejo Multiplica(complejo c);
        complejo Cociente(complejo c);
        //impresion
        void Prt(){ cout <<"("<< real <<","<< imag<<"i)"<<endl;}
};



#endif // COMPLEJOFINAL_H_INCLUDED
