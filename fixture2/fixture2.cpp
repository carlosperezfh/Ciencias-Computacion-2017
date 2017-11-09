#include "fixture2.h"

Equipos::Equipos(int pos_, string nombreP_, int PJ_,int PG_,int PE_,int PP_,int GF_,int GC_,int DG_ ,int puntaje_)
{
    //nombreP= new char[strlen(nombreP_)+1];
    pos=pos_;
    //strcpy(nombreP,nombreP_);
    nombreP=nombreP_;
    PJ=PJ_;
    PG=PG_;
    PE=PE_;
    PP=PP_;
    GF=GF_;
    GC=GC_;
    DG=DG_;
    puntaje=puntaje_;
    //puntero=new string[100];
}

Equipos::Equipos(string nombreP1_,string nombreP2_)
{
    nombreP1=nombreP1_;
    nombreP2=nombreP2_;
}
void Equipos::setPJ(int new_PJ)
{
    PJ=new_PJ;
}
int Equipos::getPJ()
{
    return PJ;
}

void Equipos::print()
{
    //int espacio=int(" ");*********
    cout << pos << "        " << nombreP<< "    "<< PJ <<"  "<<PG <<"  " <<PE <<"  " <<PP <<"  " <<GF <<"  " <<GC <<"  " <<DG <<"  " <<puntaje << endl;
}

void Equipos::printpartidos()
{
     cout << nombreP1 << "  -  " <<nombreP2 << endl;
}

Equipos::~Equipos()
{
    //delete[] puntero;
}

/* Clase fecha */
template<class T>
fecha<T>::fecha()  //:Equipos(pos,nombreP,PJ,PG,PE,PP,GF,GC,DG,puntaje)
{
    num_equipos=vEqui.size();
    num_fechas=(num_equipos*2)-2;
    prim_rueda=num_fechas/2;
    seg_rueda=num_fechas/2;
    int *Fechanum;
    Fechanum= new int[num_equipos];
    for(int ifec=0;ifec<=num_fechas;ifec++){
        Fechanum[ifec]=ifec+1;
    }
    //Team_by_match.resize (vEqui.size());
    //copy (vEqui.begin(), vEqui.end(), Team_by_match.begin());
    //puntero= new char[strlen(nombreP1)+1,strlen(nombreP2)+1];

}
template<class T>
void fecha<T>::printtabla()
{
    //this->vEqui[0].PJ = 99;


    cout << this->vEqui.size() <<endl;   //this sacamos el tama;o de prueba que esta en el main. puntero qque apunta al mismo objeto
}
template<class T>
void fecha<T>::addEquipo(T Eq)
{
    this->vEqui.push_back(Eq);

}

template<class T>
void fecha<T>::generar_vector()
{
    vPartid=vEqui;
    //this->Team_by_match.push_back(pru);
}

template<class T>
void fecha<T>::generar_partidos()
{
    //Team_by_match[0]

    //this->Team_by_match.push_back(pru);
}

template<class T>
void fecha<T>::llenarvector(T llv )
{
    this->vlistmatch.push_back(llv);
    //partido matchnro1(vEqui[0].nombreP,vEqui[1].nombreP);
}

template<class T>
void fecha<T>::borrarfila(int bv)
{
    this->vlistmatch.erase(vlistmatch.begin()+bv);

}


template<class T>
fecha<T>::~fecha()
{
    delete[] Fechanum;
}

partido::partido(char equi1_[],char equi2_[])
{
/*  equi1= new char[strlen(equi1_)+1];
    equi2= new char[strlen(equi2_)+1];*/
    strcpy(equi1,equi1_);
    strcpy(equi2,equi2_);

}

partido::~partido()
{
    /*delete []equi1;
    delete []equi2;*/
}

template<class T>
listapartidos<T>::listapartidos()
{
    //vlistmatch.pushback(vEqui[con,0])
    tot_equi=10;
	tot_part_bru=tot_equi*tot_equi;
    int con=0;
	for(int c=0;c<tot_part_bru && con<tot_part_bru;c++){
	    for(int i=0;i<tot_equi;i++){
            partidos[con][0]=c+1;
            partidos[con][1]=i+1;
            con=con+1;
	    }
	}

    con=0;
	for(int d=0;d<tot_part_bru && con<tot_part_bru;d++){
	    for(int j=0;j<tot_equi;j++){
            cout  <<"["<<con<<"] "<<"[0]  " << partidos[con][0] << " - "<<"["<<con<<"] "<<"[1]  " << partidos[con][1] << endl;
            con=con+1;
        }
	}
    cout << partidos[7][0] << " - "<< partidos[8][0] << endl;


}



template<class T>
listapartidos<T>::~listapartidos()
{

}

template class listapartidos<int>;
template class listapartidos<partido>;
template class listapartidos<string>;
template class listapartidos<Equipos>;


template class fecha<int>;
template class fecha<Equipos>;


