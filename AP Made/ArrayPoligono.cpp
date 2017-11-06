#include "poligono.h"
#include "ArrayPoligono.h"

Arraypoligono::Arraypoligono(poligono *ptrPol_ ,int len_){
    len=len_;
    ptrPol = new poligono[10];
    //this->ptrPol = new poligono[len];
    //ptrPol=new poligono[len];
    //this->len=len;
    //strcpy(ptrPol,ptrPol_);

}

void Arraypoligono::AddPol(const poligono &p){
    //ptrPol[0].poligono(2,2,"rectangulo")
}
