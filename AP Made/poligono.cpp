#include "poligono.h"
poligono::poligono(int largo_,int altura_){
    largo=largo_;
    altura=altura_;
}
poligono::poligono(int*,int len_){
    this->len=len;
    len=len_;
    ptr=new int[len];
}
poligono::poligono(int largo_,int altura_ ,string nomPol_){
    largo=largo_;
    altura=altura_;
    nomPol=nomPol_;
}

double rectangulo::getArea(){
    return largo*altura;
}

void rectangulo::setArea(int new_l,int new_a){
    largo=new_l;
    altura=new_a;
}
