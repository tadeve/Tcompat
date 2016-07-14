/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2905"
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
  for (int cas = 1; cas <= T; cas++) {
    int out, N, K, P;
    cin >> N >> K >> P;
    out = ((K + P - 1) % N) + 1;
    cout << "Case " << cas << ": " << out << endl;
  }
  // system("pause");
  return 0;
}
