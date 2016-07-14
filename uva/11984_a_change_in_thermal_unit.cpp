/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3135"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int T, counter = 1;
  cin >> T;
  while (T--) {
    float C, d;
    cin >> C >> d;
    // cout << C*1.8 << " " << d<<endl;
    float F = (1.8 * C) + 32.0 + d;
    // cout << F << endl;
    C = (F - 32) * (0.555555);
    // cout << C << endl;
    printf("Case %d: %0.2f\n", counter, C);
    counter++;
  }
  //	system("pause");
  return 0;
}
