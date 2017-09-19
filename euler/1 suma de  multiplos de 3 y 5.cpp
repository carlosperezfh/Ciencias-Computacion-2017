#include <iostream>
using namespace std;

bool mul_3(int num);
bool mul_5(int num);
int fun_suma(int mil);

int main(){
    int resu,mil=1000;

    resu=fun_suma(mil);
    cout << resu << endl;
    return 0;
}

bool mul_3(int num){
    return(num%3==0);    //retorna true (1) si es divisible por 3
}

bool mul_5(int num){
    return(num%5==0);
}

int fun_suma(int mil){
    int suma=0;
    for(int i=0;i<mil;i++){
        if (mul_3(i) || mul_5(i))
            suma=suma+i;
    }
    return suma;
}

/*
1 1     1
1 0     1
0 1     1
0 0     0
*/
