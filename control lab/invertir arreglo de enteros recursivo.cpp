#include <iostream>
using namespace std;

void invertir(int cadena[], int tamanio);

int main(){
    int cadena[]={1,2,3,4,7};
    int tamanio=5,resu;


    invertir(cadena,tamanio);
    for(int j=0;j<tamanio;j++)
        cout << cadena[j];

    return 0;
}

void invertir(int cadena[], int tamanio){
    int temp;
    for(int i=0;i<tamanio/2;i++){
        temp=cadena[i];
        cadena[i]=cadena[tamanio-i-1];
        cadena[tamanio-i-1]=temp;
    }

}

