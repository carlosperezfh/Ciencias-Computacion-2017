#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <fstream>
#include <math.h>
using namespace std;

class poligono {
    public:
        poligono()=default;
        poligono(int,int);
        poligono(int*,int);
        poligono(poligono*,int);
        poligono(int,int,string);

        virtual double getArea() = 0;

    protected:
        int largo, altura;
        string nomPol;
        int len;
        int *ptr;
};

class rectangulo : public poligono {
    public:
        rectangulo()=default;
        rectangulo(int,int);
        virtual double getArea();
        void setArea(int,int);


    protected:


};
#endif // POLIGONO_H_INCLUDED
