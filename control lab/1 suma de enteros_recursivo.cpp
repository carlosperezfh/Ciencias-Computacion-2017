//arreglo que delvuelva el numero de enteros

#include <iostream>
using namespace std;

int sumrec(const int ar[], const int len);
int main(){
    int resu;
    int ar[]={1,2,3};
    resu=sumrec(ar,3);
    cout<<resu<<endl;
    return 0;

}
/*
int sumae(const int ar[], const int len){
    int suma=0;
    for(int i=0;i<len;i++)
        suma=suma+ar[i];
    return suma;
}*/

int sumrec(const int ar[], const int len){
    if (len==0)     //len==1
        return 0;       //arr[0];
    else
        return ar[len-1] + sumrec(ar,len-1);

}

//---------------
// 1 | 2 | 3 | 7 |
//---------------
//len-1= 7  porque 4-1 es ar[3]]
