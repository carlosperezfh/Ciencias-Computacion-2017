/*1.	Implementar un programa que imprima el contenido de un arreglo de dos dimensiones de forma espiral
Por ejemplo, suponga que el arreglo contiene los siguientes valores:
1  2  3  4  5  6
7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24

La salida de su programa debe ser:
	1 2 3 4 5 6 12 18 24 23 22 21 20 19 13 7 8 9 10 11 17 16 15 14*/


#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int A[20][20];
	int filas, columnas1, columnas2;
	int i,j,z;

	cout<<"Matriz A"<<endl;
	cout<<"Filas de A: "<<endl;
	cin >> filas;
	cout<<"Columnas de A: "<<endl;
	cin >> columnas1;
	cout<<endl;

	for(i=0; i<filas; ++i){
		for(j=0; j<columnas1; ++j){
			cout<<"Ingrese el valor de A["<< i <<"]["<< j <<"]";
			cin >> A[i][j];
		}
	}

    cout<<endl;
	cout<<"Matriz A";
	cout<<endl;
	for(i=0; i<1; ++i){
		for(j=0; j<6; ++j){
			cout<<A[i][j];
			cout<<" ";
		}
		//cout<<endl;
	}

    cout<<endl;
    int k=6;
	for(i=1; i<2; ++i){
		for(j=0;j>6;++j){
			cout<<A[i][k];
			--k;
			cout<<"         ";
			cout<<A[i][j];
			cout<<endl;

		}
	}
/*
	for(i=1; i<2; ++i){
		for(j=0; j<6; ++j){
		    cout<<"          ";
			cout<<A[i][j];
			cout<<endl;
		}
	}
*/
	for(i=2; i<3; ++i){
		for(j=5; j>=0;--j){
			cout<<A[i][j];
			cout<<" ";
		}
	}

	/*for(i=3; i<4; ++i){
		for(j=0; j<6; ++j){
            	for(k=1; k<2; ++k){
                    for(h=0; h<6; ++h){

			cout<<A[k][h] ;
			//cout<<endl;
		}
	}*/



	return 0;
}



