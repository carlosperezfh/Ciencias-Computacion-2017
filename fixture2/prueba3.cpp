void ingresar(Lista *cab, equipos equi)
{
    Lista nodo, aux;
    nodo*new(liga);
    nodo->dato=equi;
    nodo->sig=NULL;
    if(!*cab)
        *cab=nodo;
    else{
        aux=*cab;
        while (aux->sig)
    }


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
