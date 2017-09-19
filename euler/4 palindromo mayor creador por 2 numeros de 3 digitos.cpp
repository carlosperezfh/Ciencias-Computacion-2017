/*A palindromic number reads the same both ways. The largest palindrome made from the product
of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers. */

#include <iostream>
#include <math.h>

using namespace std;


int esPalin(int orig);

int main() {
  int n, m, max = 0;

  for (n = 100; n <= 999; n++) {
    for (m = 100; m <= 999; m++) {
      int p = n*m;
      if(esPalin(p) && p > max) {
        max = p;
      }
    }
  }

  cout << "El palindromo mas grande es: " << max << endl;

  return 0;
}

int esPalin(int orig) {
  int alreves = 0, n = orig;

  while (n > 0) {
    alreves = alreves * 10 + n % 10;
    n = n/10;
  }

  return orig == alreves;
}
