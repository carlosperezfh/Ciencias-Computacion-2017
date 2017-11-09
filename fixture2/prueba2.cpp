        cin>>a;
        int localA, localB, visitanteA, visitanteB, golesLocal, golesVisitante;
        if(a=1){ //con el switch explotaba, no sé porqué
            GenerarFixture(vectorequipos, fixture, fechastotales, PartidosPorFecha,totalequipos);
            listanueva = fixture;
            OrdenarLista(listanueva);
            cout<<"Su fixture se ha generado con éxito"<<endl;
        }
        else if (a=2){
            menusimularpartido(fixture,listanueva, fechastotales,PartidosPorFecha,vectortabla,tamanio);
        }
        else if (a=4){cout<<"ingrese una fecha, de querer ver la tabla hasta la ultima fecha simulada ingrese 0"<<endl;
            int m;
            cin>>m;
            if(recorrerlista(listanueva,m)){
                cout<<"No se simularon partidos hasta esa fecha";
            } else if(m=0) { cout<<"No existe una fecha 0!";}
            else MostrarTabla(listanueva,m,totalequipos,vectorequipos);
        }
        else if (a=3){
            MostrarEquipo(listanueva,PartidosPorFecha,fechastotales);
        }
        else if (a=5){ //tengo que reemplazar el archivo de existir, y crearlo de no figurar
            FILE *archivo = fopen("equipos.txt", "w");
            for(int k=1;k<=totalequipos/2;k++){
                int f=0;

                fwrite((const void*)& f,sizeof(int)*1,1,archivo);
                fwrite((const void*) & listanueva->infofixture.tabla[f].local[f].paramA,sizeof(int)*1,1,archivo);
                fwrite((const void*) & listanueva->infofixture.tabla[f].local[f].paramB,sizeof(int)*1,1,archivo);
                fwrite(listanueva->infofixture.tabla[f].local[f].equipo,sizeof(char)*31,1,archivo);
                fwrite(listanueva->infofixture.tabla[f].visitante[f].equipo,sizeof(char)*31,1,archivo);

                f++;
            }
            cout<<"Guardado con éxito"<< endl;
            fclose(archivo);
        }
        else if (a=6){
            vaciarlista(fixture);
            vaciarlista(listanueva);
            GenerarFixture(vectorequipos,fixture,fechastotales,PartidosPorFecha,totalequipos);
            cout << "Se ha cargado y generado un nuevo fixture!" << endl;
        }
        else if(a=7){
            vaciarlista(fixture);
            vaciarlista(listanueva);
        }
    return 0;
}

void GenerarFixture(Equipo vectorequipos[], tipofixture *fixture, int &fechastotales, int &PartidosPorFecha, int &totalequipos) //Genera el fixture y además me devuelve algunos parámetros necesarios para saber tamaños
{
    int i=0;
    int r=1;

    int local = 0;
    int visitante = 0;

    LlenarVector(vectorequipos, i);
    if(i!=0){
    cout<<"Generando el fixture"<<endl;

    totalequipos = i+1;
    int t= totalequipos%2;

 if (t=0)
        fechastotales=totalequipos-1;
  else
    fechastotales= totalequipos;
    PartidosPorFecha = totalequipos/2;
    crearlista(fixture);
    if(fechastotales!=0){
        for(int l=1;l<=fechastotales;l++){
            Aleatoriafecha(l,fechastotales,fixture); //hace aleatoria la selección de fechas. Posterior ordenamiento.

            while(r<=totalequipos/2){
                generarPartido(totalequipos, l, r, local, visitante);
                ponerenlista(fixture,vectorequipos,local,visitante,i);
            };
            fixture->infofixture.fuesimulado=false; // Para evitar varias simulaciones.
            fixture=fixture->siguiente;

        };
    };
    cout<<"..."<<endl;
    cout<<"Generado!"<<endl;

  } else cout<<"En el archivo no hay equipos participantes!"<<endl; //si el archivo está vacío.
}
}

void LlenarVector(Equipo vectorequipos[], int &i) { //usando la función dada "leerequipo" lleno el vector y devuelvo el tamaño.
     FILE *archivo = fopen ("equipos.txt", "r");
  char nombre[31];
  int pA, pB;


  while (leerEquipo(archivo, nombre, pA, pB))
  {

   vectorequipos[i].paramA = pA; //estos dos son parámetros usados para simular partidos, son enteros.
   vectorequipos[i].paramB = pB;
   strncpy(vectorequipos[i].nombre, nombre, 31);
   i++;
         vectorequipos[i].indice = i;
  }
  fclose (archivo);
}

void menusimularpartido(tipofixture *fixture, tipofixture *listanueva,int fechastotales, int &PartidosPorFecha, posiciones vectortabla[], int &tamanio){
    int fechasimular;
    if(fechastotales>0){
        cout<<"Hasta que fecha desea simular los partidos?"<<endl;
        cin>>fechasimular;
        if(fechastotales<fechasimular && fechasimular>0){
            comprobarsimulacion(fixture,fechasimular,fechastotales,PartidosPorFecha,vectortabla,listanueva,tamanio);
        } else cout<< "El campeonato no llega hasta esa fecha (o se ha ingresado un valor mas chico que 1)!"; //si se escribe una fecha no permitida, lo indica.
    }

}

void OrdenarLista(tipofixture *listanueva){
    tipofixture *listaordenada = NULL;
    while (listanueva!=NULL){
        tipofixture *ptr=listanueva;
        listanueva=listanueva->siguiente;
        ReinsertarEnLista(listaordenada,ptr);

    }
    listanueva=listaordenada;
    vaciarlista(listaordenada);

}

bool recorrerlista(tipofixture *fixture, int fechasimular){
    tipofixture *listaux=fixture;
    int a=1;
    bool t= false;
    while (a<=fechasimular){//si yo ingreso una fecha por ejemplo 4, y ya la primera está simulada, esto va a devolver verdadero para evitar sobreescribir la simulación anterior.
        if(listaux->infofixture.fuesimulado){
            t=true;
        } else listaux=listaux->siguiente; // como la lista está ordenada por fecha, no tiene sentido seguir, lo dejo porque no molesta.
        a++;
    }
    vaciarlista(listaux);
    return t;
}

    cin>>equipo;
    while (mostrar!=NULL){
        for(int x=1; x<=PartidosPorFecha; x++){
            int t=0;
            if(mostrar->infofixture.tabla[t].local[t].equipo[31]=equipo[31]){
                cout<<mostrar->infofixture.tabla[t].local[t].equipo<<"  "<< mostrar->infofixture.tabla[t].local[t].resultado<<"-"<<mostrar->infofixture.tabla[t].visitante[t].equipo<<"   "<<mostrar->infofixture.tabla[t].visitante[t].resultado<<endl;
            } else if (mostrar->infofixture.tabla[t].visitante[t].equipo[31]=equipo[31]){
                cout<<mostrar->infofixture.tabla[t].local[t].equipo<<"  "<< mostrar->infofixture.tabla[t].local[t].resultado<<"-"<<mostrar->infofixture.tabla[t].visitante[t].equipo<<"   "<<mostrar->infofixture.tabla[t].visitante[t].resultado<<endl;
                } else cout<<"ERROR: Parece que ha ingresado mal el nombre del equipo"<<endl;
        }
        mostrar=mostrar->siguiente;
    }
    vaciarlista(mostrar);
}

void MostrarEquipo(tipofixture *listanueva,int PartidosPorFecha, int fechastotales){
    tipofixture *mostrar = listanueva;
    char equipo[31];
    cout<<"ingrese el nombre del equipo que quiere buscar"<<endl;
    cin>>equipo;
    while (mostrar!=NULL){
        for(int x=1; x<=PartidosPorFecha; x++){
            int t=0;
            if(mostrar->infofixture.tabla[t].local[t].equipo[31]=equipo[31]){
                cout<<mostrar->infofixture.tabla[t].local[t].equipo<<"  "<< mostrar->infofixture.tabla[t].local[t].resultado<<"-"<<mostrar->infofixture.tabla[t].visitante[t].equipo<<"   "<<mostrar->infofixture.tabla[t].visitante[t].resultado<<endl;
            } else if (mostrar->infofixture.tabla[t].visitante[t].equipo[31]=equipo[31]){
                cout<<mostrar->infofixture.tabla[t].local[t].equipo<<"  "<< mostrar->infofixture.tabla[t].local[t].resultado<<"-"<<mostrar->infofixture.tabla[t].visitante[t].equipo<<"   "<<mostrar->infofixture.tabla[t].visitante[t].resultado<<endl;
                } else cout<<"ERROR: Parece que ha ingresado mal el nombre del equipo"<<endl;
        }
        mostrar=mostrar->siguiente;
    }
    vaciarlista(mostrar);
}


void MostrarTabla(tipofixture *listanueva, int m, int totalequipos, Equipo vectorequipos[]){
    posiciones vec[totalequipos-1];
    for (int x=1;x>=totalequipos;x++){
        int w=0;
        strncpy(vec[w].nombre,vectorequipos[w].nombre,31);
        w++;
    }
    while (listanueva!=NULL){
        acumularpuntaje (vec, listanueva, totalequipos);
        ordenarpuntaje(vec,totalequipos);
    }
    for (int l=1;l<=totalequipos;l++){
        int p=0;
        cout<<vec[p].nombre<<":"<< vec[p].puntos<<endl;
    }

}




    /*
    char vNomEquipo[20];
    char *vNomEquipo_;

    //vector<Pais> vEquipos;
    vector<string> vEquipos;

    cout << "Ingrese nombre de Equipo" << endl;
    cin >> vNomEquipo;
    //Pais Peru();

    //strcpy(vNomEquipo,vNomEquipo_);
    vEquipos.push_back(vNomEquipo);
    cout << vEquipos[0] << endl;

    //Pais ingreso;
    //ingreso.
    //vector<Team *> vTeams;

    vector<char> v;

    // llenamos el vector v con valores desde la 'A' hasta la 'Z'
    for (int x = 'A'; x <= 'Z'; x++) v.push_back(x);

    // despliegue de los elementos del vector v
    // mediante el operador [].
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // despliegue de los elementos del vector v
    // mediante el método at().
    for(int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";

    cout << endl;

    cin.get();
*/


        //void generarfixture();

        //void generar();
       /* 1   true   mymap
        4   eeee */


    /*
    string line;
    string cadena[10];
    int i=0;
    ifstream source("selecciones-sudamerica.txt");
            //ofstream destination("Selecciones-sudamerica.txt");
    if (source.is_open()){
        while (getline(source,line)) {
            cadena[i]=line;
            i++;
        }
        source.close();
    }

    for(int j=0; j<i;j++){
        cout<<"Line #"<<j<<": "<<cadena[j]<<"\n";
        vEqui.push_back(cadena[j]);
    }

    ostream_iterator<string> outStream(cout, "\n");

    copy(vEqui.begin(), vEqui.end(), outStream);
    cout << endl;
    //vEqui=vEqui_;
    //vector<string> vEqui;*/

    /*
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

        fecha generar;
        generar.
        if (a==1){


            vector<string> vEqui;
            string line;
            string cadena[10];
            int i=0;
            ifstream source("selecciones-sudamerica.txt");
            //ofstream destination("Selecciones-sudamerica.txt");
            if (source.is_open()){
                while (getline(source,line)) {
                    cadena[i]=line;
                    i++;
                }
            source.close();
            }

            for(int j=0; j<i;j++){
                cout<<"Line #"<<j<<": "<<cadena[j]<<"\n";

                vEqui.push_back(cadena[j]);
            }


            ostream_iterator<string> outStream(cout, "\n");

            copy(vEqui.begin(), vEqui.end(), outStream);
            cout << endl;
            int num_equipos=i;
            int num_fechas=(num_equipos*2)-2;
            cout << num_equipos << endl;
            cout << num_fechas << endl;
            int prim_rueda=num_fechas/2;
            int seg_rueda=num_fechas/2;
            int *Fechanum;
            Fechanum= new int[num_equipos];
            for(int ifec=0;ifec<=num_fechas;i++){
                Fechanum[ifec]=ifec+1;
            }
        }
    }


    return 0;
}


*/
