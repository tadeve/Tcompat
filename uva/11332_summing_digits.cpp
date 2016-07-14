/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2307"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <iostream>
#include <string>
#define MAX 100000000
using namespace std;
int main(void) {
  unsigned long long n = 0;
  cin >> n;
  // cout << n << endl;
  while (n != 0) {
    unsigned long long k = n;
    while (k > 9) {
      // cout << k << endl;
      // cout << (k % 10) << " " << ((k / 10) % 10) << " " << ((k / 100) % 10)
      // << " " << ((k / 1000) % 10) << " " << ((k / 10000) % 10) << " " << ((k
      // / 100000) % 10) << " " << ((k / 1000000) % 10) << " " << ((k /
      // 10000000) % 10) << " " << ((k / 100000000) % 10) << " " << ((k /
      // 1000000000) % 10) << endl;
      k = (k % 10) + ((k / 10) % 10) + ((k / 100) % 10) + ((k / 1000) % 10) +
          ((k / 10000) % 10) + ((k / 100000) % 10) + ((k / 1000000) % 10) +
          ((k / 10000000) % 10) + ((k / 100000000) % 10) +
          ((k / 1000000000) % 10);
    }
    cout << k << endl;

    cin >> n;
  }
  // system("pause");
  return 0;
}
