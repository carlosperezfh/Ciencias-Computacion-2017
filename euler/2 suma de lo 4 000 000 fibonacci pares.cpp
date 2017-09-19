/*Each new term in the fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2,
the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the fibonacci sequence whose values do not exceed four million,
find the sum of the even-valued terms.*/

#include <iostream>
using namespace std;

int num_fibonacci(int n);
bool verify_par(int n);
int suma(int fourm);

int main() {
    int resu,f;

    f=4000000;
    resu=suma(f);
	cout << "la suma de los pares fibonacci menores que" << f << "es: " << resu <<endl;
	return 0;
}

bool verify_par(int n){
	return (n%2 == 0);
}


int num_fibonacci(int n){
	if(n < 2){
		return 1;
	}else
		return num_fibonacci(n-1) + num_fibonacci(n-2);	//F(n) = F(n-1) + F(n-2)
}

int suma(int fourm){
	int suma=0;
	for(int i = 1;; i++){
		if(num_fibonacci(i) < fourm){
			if(verify_par(num_fibonacci(i))) //si retorna 1 ejecuta el acumulador
                suma=suma+num_fibonacci(i);
		}else{
			break;
		}
	}
    return suma;

}
