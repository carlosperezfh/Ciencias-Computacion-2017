#include <iostream>
using namespace std;

void invertir(int cadena[], int tamanio);

int main(){
    int cadena[]={8,2,3,4,5};
    int tamanio=5;
    int temp;
    for(int i=0;i<tamanio/2;i++){
        temp=cadena[i];
        cadena[i]=cadena[tamanio-i-1];
        cadena[tamanio-i-1]=temp;

    }
    for(int j=0;j<tamanio;j++)
        cout << cadena[j];

    return 0;
}
