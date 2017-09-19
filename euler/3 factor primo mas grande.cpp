/*Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the num_long 600851475143 ?*/


#include <iostream>
#include <math.h>
#define num_long 600851475143
using namespace std;

int es_primo(int num_fac_pri);

int main()
{
    int jj=0;
    int i=0;

    while(1) {
        for(i=3; ; i+=2) {
            if(es_primo(i)) {
                if(num_long%i==0)
                    jj=i;
                if(i>=(sqrt(num_long)))
                    goto END;
            }
        }
    }

    END:
    cout << jj << endl;
    return 0;
}

int es_primo(int num_fac_pri)
{
    int i=0;
    int ss=( (int) sqrt(num_fac_pri));

    for(i = 3; i <= ss; i=i+2) {
        if(num_fac_pri % i == 0)
            return 0;
    }
    return 1;
}

