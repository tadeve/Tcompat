/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2542"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
  int T;
  cin >> T;
  while (T--) {
    long long a;
    cin >> a;
    a = ((((((a * 567) / 9) + 7492) * 235) / 47) - 498);
    int k = ((a - (a % 10)) / 10) % 10;
    if (k < 0) k *= -1;
    cout << k << endl;
  }
  // system("pause");
  return 0;
}
