#ifndef ARRAYPOLIGONO_H_INCLUDED
#define ARRAYPOLIGONO_H_INCLUDED
#include "poligono.h"

class Arraypoligono {
    public:
        Arraypoligono()=default;
        Arraypoligono(poligono *,int);//{this->ptrPol = new poligono[len];}
        ~Arraypoligono(){delete[] ptrPol;}

        void AddPol(const poligono &p);
        void removePol();


    protected:
        poligono *ptrPol[10];
        int len;


};



#endif // ARRAYPOLIGONO_H_INCLUDED
