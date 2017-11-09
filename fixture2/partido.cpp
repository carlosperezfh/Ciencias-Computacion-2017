#include "fixture2.h"

partido::partido(string Equi1_,string Equi2_)
{
    Equi1=Equi1_;
    Equi2=Equi2_;
}



partido::~partido()
{

}

template<class T>
listapartidos<T>::listapartidos()
{
}

template<class T>
void listapartidos<T>::llenarvector(T llv)
{
    //this->vlistmatch.push_back(llv);
}

template<class T>
listapartidos<T>::~listapartidos()
{

}

template class listapartidos<int>;
template class listapartidos<partido>;
