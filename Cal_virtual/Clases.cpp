#include "Clases.h"

Equipo::Equipo(int pos_, string nombreP_)
{
    pos=pos_;
    nombreP=nombreP_;
    PJ=0;
    PG=0;
    PE=0;
    PP=0;
    GF=0;
    GC=0;
    DG=0;
    puntaje=0;
}

Equipo::Equipo(string nombreP1_,string nombreP2_)
{
    nombreP1=nombreP1_;
    nombreP2=nombreP2_;
}

Equipo::Equipo(string nombreP1_,string nombreP2_, int fechaN_){
    nombreP1=nombreP1_;
    nombreP2=nombreP2_;
    fechaN=fechaN_;
}

void Equipo::setPJ(int new_PJ)
{
    PJ=new_PJ;
}
int Equipo::getPJ()
{
    return PJ;
}

void Equipo::print()
{
    //int espacio=int(" ");*********
    cout << pos << "        " << nombreP<< "    "<< PJ <<"  "<<PG <<"  " <<PE <<"  " <<PP <<"  " <<GF <<"  " <<GC <<"  " <<DG <<"  " <<puntaje << endl;
}

void Equipo::printpartidos()
{
     cout << nombreP1 << "  -  " <<nombreP2 << endl;
}
void Equipo::printpartidosf()
{
     cout << nombreP1 << "  -  " <<nombreP2 << "  -  " << fechaN<<endl;
}



Equipo::~Equipo()
{

}

/* Clase Evento */
Evento::Evento(){
    string nombreEquipo;
    string nombreTxt = "selecciones-sudamerica.txt";
    ifstream entradaTxt(nombreTxt.c_str());
    //if(!entradaTxt.is_open()) throw runtime_error("ERROR: EL TXT " + nombreTxt + " NO FUE ENCONTRADO/ABIERTO");

    for(int i = 1; entradaTxt >> nombreEquipo; ++i) {
        addEquipo(Equipo(i,nombreEquipo));
    }
}

Evento::Evento(int prim_rueda_,int seg_rueda_,int num_equipos_,int num_fechas_)
{
    num_equipos=num_equipos_;
    /*this->num_fechas=(num_equipos*2)-2;
    this->prim_rueda=num_fechas/2;
    this->seg_rueda=num_fechas/2;*/
    num_fechas=num_fechas_;
    prim_rueda=prim_rueda_;
    seg_rueda=seg_rueda_;
}

void Evento::printTabla()
{
    cout << "Posicion Pais      PJ PG PE PP GF GC DG Puntaje" <<  endl;
    for (unsigned int i=0;i<vEqui.size();i++)
        vEqui[i].print();
}
void Evento::printTodosLosPartidos()
{
    for (unsigned int i = 0; i <= vlistmatch.size()-1; i++){
        vlistmatch[i].printpartidos();
    }
}

void Evento::addEquipo(Equipo Eq)
{
    this->vEqui.push_back(Eq);
}


void Evento::llenarvector()
{
    for(int i = 0;i < 10; i++)
        for(int j = 0; j < 10;j++)
            this->vlistmatch.push_back(Equipo(vEqui[i].nombreP, vEqui[j].nombreP));
}

void Evento::borrarfila(int bv)
{
    this->vlistmatch.erase(vlistmatch.begin()+bv);

}

void Evento::borrarEquiposRepetidos()
{
    for (unsigned int i=0; i<=vlistmatch.size(); i++){
        if (vlistmatch[i].nombreP1==vlistmatch[i].nombreP2){
            cout << "Se borro esta Fila  " << i  << endl;
            borrarfila(i);
            i++;
        }
    }
}


Evento::~Evento()
{
    ;
}

vector<Equipo> Evento::escogerEquipo(){
    // ya tenemos num_fechas en evento
    num_equipos=vEqui.size();
    int num_Partidos=vlistmatch.size();


    int partiXfecha=num_equipos/2;
    int acu=partiXfecha;
    int con=0;
    int conDecon=1;
    //cout<<"el valor de Fechan es"<<fechaN<<endl;
    //con tiene que ir incrementandose y cuando sea igual a partiXfecha
    //conDecon se incrementara en uno para definir el nmero de la fecha

    int indicePartido_1;

    int iDev;
    for(unsigned rrv=0;rrv<=vlistmatch.size()-1;rrv++){
        con++;
        indicePartido_1 = rand()%(vlistmatch.size());


        PartidoEscogido.push_back(Equipo(vlistmatch[indicePartido_1].nombreP1,vlistmatch[indicePartido_1].nombreP2,conDecon));
        vlistmatch.erase(vlistmatch.begin()+(indicePartido_1));


        indicePartido_1 = rand()%(vlistmatch.size());

        PartidoEscogido.push_back(Equipo(vlistmatch[indicePartido_1].nombreP1,vlistmatch[indicePartido_1].nombreP2,conDecon));
        vlistmatch.erase(vlistmatch.begin()+(indicePartido_1));

        iDev=PartidoEscogido.size();

        if ((PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-2].nombreP1 || PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-2].nombreP2) || (PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-2].nombreP1 || PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-2].nombreP2))  {

            vlistmatch.push_back(Equipo(PartidoEscogido[iDev-1].nombreP1,PartidoEscogido[iDev-1].nombreP2));
            PartidoEscogido.erase(PartidoEscogido.begin()+(iDev-1));
            system("PAUSE");
        }
        for (unsigned int i = 0; i <= PartidoEscogido.size()-1; i++)
            PartidoEscogido[i].printpartidosf();
        cout<<endl;

        if (iDev==3){
            if ((PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-2].nombreP1 || PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-2].nombreP2) || (PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-2].nombreP1 || PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-2].nombreP2))  {

                vlistmatch.push_back(Equipo(PartidoEscogido[iDev-1].nombreP1,PartidoEscogido[iDev-1].nombreP2));
                PartidoEscogido.erase(PartidoEscogido.begin()+(iDev-1));
                system("PAUSE");
                goto salir;
            }
            if ((PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-3].nombreP1 || PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-3].nombreP2) || (PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-3].nombreP1 || PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-3].nombreP2))  {

                vlistmatch.push_back(Equipo(PartidoEscogido[iDev-1].nombreP1,PartidoEscogido[iDev-1].nombreP2));
                PartidoEscogido.erase(PartidoEscogido.begin()+(iDev-1));
                system("PAUSE");
                goto salir;
            }
        }
        for (unsigned int i = 0; i <= PartidoEscogido.size()-1; i++)
            PartidoEscogido[i].printpartidosf();
        cout<<endl;

        if (iDev==4){
            if ((PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-2].nombreP1 || PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-2].nombreP2) || (PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-2].nombreP1 || PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-2].nombreP2))  {

                vlistmatch.push_back(Equipo(PartidoEscogido[iDev-1].nombreP1,PartidoEscogido[iDev-1].nombreP2));
                PartidoEscogido.erase(PartidoEscogido.begin()+(iDev-1));
                system("PAUSE");
                goto salir;
            }
            if ((PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-3].nombreP1 || PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-3].nombreP2) || (PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-3].nombreP1 || PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-3].nombreP2))  {

                vlistmatch.push_back(Equipo(PartidoEscogido[iDev-1].nombreP1,PartidoEscogido[iDev-1].nombreP2));
                PartidoEscogido.erase(PartidoEscogido.begin()+(iDev-1));
                system("PAUSE");
                goto salir;
            }
            if ((PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-4].nombreP1 || PartidoEscogido[iDev-1].nombreP1==PartidoEscogido[iDev-4].nombreP2) || (PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-4].nombreP1 || PartidoEscogido[iDev-1].nombreP2==PartidoEscogido[iDev-4].nombreP2))  {

                vlistmatch.push_back(Equipo(PartidoEscogido[iDev-1].nombreP1,PartidoEscogido[iDev-1].nombreP2));
                PartidoEscogido.erase(PartidoEscogido.begin()+(iDev-1));
                system("PAUSE");
                goto salir;
            }
        for (unsigned int i = 0; i <= PartidoEscogido.size()-1; i++)
            PartidoEscogido[i].printpartidosf();
        }

        salir:
        cout<<endl;
        //cout<<"el valor de acu antes del if es"<<acu<<endl;
        if ((PartidoEscogido.size())==acu){
            conDecon++;
            con=0;

            acu=acu+partiXfecha;
            //cout<<"el valor de acu es"<<acu<<endl;
        }
        //cout<<"el valor de con despues del if es: "<<con<<endl;
    }
//    vector<Partidos,[](Partidos p,Partidos p2){return p.puntaje mayor p2.puntaje}
    //PartidoEscogido.push_back(vlistmatch[indicePartido_2]);
    //cout<<"termino el for"<<endl;
    for (unsigned int i = 0; i <= PartidoEscogido.size()-1; i++){
        PartidoEscogido[i].printpartidosf();

    }
    cout<<endl;
    //cout<<PartidoEscogido[0].nombreP1<<endl;

//    cout<<PartidoEscogido[0].nombreP1<<endl;
//    cout<<PartidoEscogido[0].nombreP2<<endl;
//    cout<<PartidoEscogido[0].fechaN<<endl;

    return PartidoEscogido;
}




