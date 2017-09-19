/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.


What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/


#include <iostream>
using namespace std;

bool num_peque(int num, int n);

int main() {
    int num = 20;
    int resu = num;
    while (!num_peque(resu, num)) {
        resu = resu + num;
    }
    cout << resu << '\n';
}

bool num_peque(int num, int n) {
    if (n == 0) {
        return true;
    }
    return (num % n != 0) ? false : num_peque(num,n-1);
}
