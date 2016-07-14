/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2450"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#define MAX 100000000
using namespace std;
int main(void) {
  int T;
  cin >> T;
  while (T--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int vals[] = {a, b, c, d};
    sort(vals, vals + 4);
    if (b == a && c == a && d == a) {
      cout << "square" << endl;
    } else if ((a == b && c == d) || (a == c && d == b) || (a == d && c == b)) {
      cout << "rectangle" << endl;
    } else if (vals[3] - vals[2] < vals[0] + vals[1]) {
      cout << "quadrangle" << endl;
    } else {
      cout << "banana" << endl;
    }
  }
  // system("pause");
  return 0;
}
