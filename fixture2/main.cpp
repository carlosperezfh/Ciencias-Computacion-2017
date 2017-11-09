#include "fixture2.h"

int main()
{
    int a;
    while (a!= 7){
        cout<<"FIXTURE ELIMINATORIAS 2016"<<endl;
        cout<<"Ingrese una opcion"<<endl;
        cout<<"1. Generar Tabla"<<endl;
        cout<<"2. Generar Fixture"<<endl;
        cout<<"3. Ver Equipo"<<endl;
        cout<<"4. Tabla de Posiciones"<<endl;
        cout<<"5. Guardar Fixture"<<endl;
        cout<<"6. Cargar Fixture"<<endl;
        cout<<"7. Salir"<<endl;
        cin>>a;

        if (a==1){
            /*Creamos objetos tipo Equipos*/
            Equipos Brasil(1,"Brasil",0,0,0,0,0,0,0,0);
            Equipos   Chile(2,"Chile",0,0,0,0,0,0,0,0);
            Equipos Uruguay(3,"Uruguay",0,0,0,0,0,0,0,0);
            Equipos Bolivia(4,"Bolivia",0,0,0,0,0,0,0,0);
            Equipos Ecuador(5,"Ecuador",0,0,0,0,0,0,0,0);
            Equipos Argentina(6,"Argentina",0,0,0,0,0,0,0,0);
            Equipos Paraguay(7,"Paraguay",0,0,0,0,0,0,0,0);
            Equipos Colombia(8,"Colombia",0,0,0,0,0,0,0,0);
            Equipos Venezuela(9,"Venezuela",0,0,0,0,0,0,0,0);
            Equipos Peru(10,"Peru",0,0,0,0,0,0,0,0);

            /*Creamos el vector nombrepais tipo Equipos*/
            fecha<Equipos> nombrepais;

            /*añadimos los objetos tipo Equipo al vector vEqui por medio del metodo addEquipo*/
            nombrepais.addEquipo(Brasil); //  = nombrepais.vEqui[0]
            nombrepais.addEquipo(Chile);    //  = nombrepais.vEqui[1]
            nombrepais.addEquipo(Uruguay);
            nombrepais.addEquipo(Bolivia);
            nombrepais.addEquipo(Ecuador);
            nombrepais.addEquipo(Argentina);
            nombrepais.addEquipo(Paraguay);
            nombrepais.addEquipo(Colombia);
            nombrepais.addEquipo(Venezuela);
            nombrepais.addEquipo(Peru);
            //prueba.addEquipo(argentina); //  = prueba.vEqui[1]
            //prueba.vEqui[0].setPJ(99);
            //prueba.vEqui[0].getPJ();*********

            /*Imprimiendo La tabla Inicial que esta en el vector vEqui*/

            cout << "Posicion Pais      PJ PG PE PP GF GC DG Puntaje" <<  endl;
            for (int i=0;i<=9;i++)
                nombrepais.vEqui[i].print();
            nombrepais.generar_vector();

            //Equipos match1("Brasil","Chile");   esta linea si funciona, es el equivalente a la siguiente linea


/*            Equipos puntero[0]=(nombrepais.vEqui[0].nombreP, nombrepais.vEqui[0].nombreP);
            cout << puntero << endl;*/
            Equipos match1(nombrepais.vEqui[0].nombreP, nombrepais.vEqui[0].nombreP);
            Equipos match2(nombrepais.vEqui[0].nombreP, nombrepais.vEqui[1].nombreP);
            Equipos match3(nombrepais.vEqui[0].nombreP, nombrepais.vEqui[2].nombreP);
            Equipos match4(nombrepais.vEqui[1].nombreP, nombrepais.vEqui[0].nombreP);
            Equipos match5(nombrepais.vEqui[1].nombreP, nombrepais.vEqui[1].nombreP);
            Equipos match6(nombrepais.vEqui[1].nombreP, nombrepais.vEqui[2].nombreP);
            Equipos match7(nombrepais.vEqui[2].nombreP, nombrepais.vEqui[0].nombreP);
            Equipos match8(nombrepais.vEqui[2].nombreP, nombrepais.vEqui[1].nombreP);
            Equipos match9(nombrepais.vEqui[2].nombreP, nombrepais.vEqui[2].nombreP);
            Equipos match10(nombrepais.vEqui[3].nombreP, nombrepais.vEqui[0].nombreP);
            Equipos match11(nombrepais.vEqui[3].nombreP, nombrepais.vEqui[1].nombreP);
            Equipos match12(nombrepais.vEqui[3].nombreP, nombrepais.vEqui[2].nombreP);


            nombrepais.llenarvector(match1);
            nombrepais.llenarvector(match2);
            nombrepais.llenarvector(match3);
            nombrepais.llenarvector(match4);
            nombrepais.llenarvector(match5);
            nombrepais.llenarvector(match6);
            nombrepais.llenarvector(match7);
            nombrepais.llenarvector(match8);
            nombrepais.llenarvector(match9);
            nombrepais.llenarvector(match10);
            nombrepais.llenarvector(match11);
            nombrepais.llenarvector(match12);

            //match_nro.llenarvector(matchnro1);
            //vlistmatch={"ddd","kkk"};

            for (int i=0;i<=11;i++){
                if (nombrepais.vlistmatch[i].nombreP1==nombrepais.vlistmatch[i].nombreP2){
                    cout << "Se borro esta Fila  " << i  << endl;
                    nombrepais.borrarfila(i);
                    i++;

                }
                //nombrepais.vlistmatch[i].printpartidos();
            }

            for (int i=0;i<=11;i++){
                nombrepais.vlistmatch[i].printpartidos();
            }

            //nombrepais.generar_vector();
            //nombrepais.vlistmatch[1].printpartidos();
            //nombrepais.vlistmatch[2].printpartidos();
    if (a==2){

            //vector<string> prueba;
    }

    return 0;
}
}
}

