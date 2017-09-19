/*La suma de los cuadrados de los diez primeros números naturales es,

12 + 22 + ... + 102 = 385
El cuadrado de la suma de los diez primeros números naturales es,

(1 + 2 + ... + 10) 2 = 552 = 3025
Por lo tanto, la diferencia entre la suma de los cuadrados de los diez primeros números naturales y el cuadrado de la suma es 3025 - 385 = 2640.

Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.*/

#include <iostream>
using namespace std;
int cuadrado(int num);
int diferencia(int n1,int n2);

int main(){


    int sum_c_10=0, c_sum_10,acu,sum10p=0,dif_main;

    for(int i=1;i<=100;i++){
        acu=cuadrado(i);
        sum_c_10=sum_c_10+acu;
    }
    for(int j=1;j<=100;j++)
        sum10p=sum10p+j;


    c_sum_10=cuadrado(sum10p);
    dif_main=diferencia(c_sum_10,sum_c_10);



    cout << sum_c_10 << endl;
    cout << c_sum_10 << endl;
    cout << dif_main << endl;

}
int cuadrado(int num){
    int cua;
    cua=num*num;
    return cua;
}

int diferencia(int n1,int n2){
    int resu;

    resu=n1-n2;
    return resu;
}
