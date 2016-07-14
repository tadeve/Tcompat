/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2843"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
vector<int> vectoriez4(int n) {
  int a = 4;
  vector<int> digits;
  while (a--) {
    digits.push_back(n % 10);
    n = (n - (n % 10)) / 10;
  }
  return digits;
}

int main(void) {
  int T, counter = 1;
  cin >> T;
  while (T--) {
    int a, b, c, d, sum;
    cin >> a >> b >> c >> d;
    // cout << a << " " << b << " " << c << " " << d << endl;
    vector<int> av, bv, cv, dv;
    av = vectoriez4(a);
    bv = vectoriez4(b);
    cv = vectoriez4(c);
    dv = vectoriez4(d);
    sum = (((av[3] * 2) % 10) + (((av[3] * 2) - ((av[3] * 2) % 10)) / 10)) +
          (((av[1] * 2) % 10) + (((av[1] * 2) - ((av[1] * 2) % 10)) / 10)) +
          (((bv[3] * 2) % 10) + (((bv[3] * 2) - ((bv[3] * 2) % 10)) / 10)) +
          (((bv[1] * 2) % 10) + (((bv[1] * 2) - ((bv[1] * 2) % 10)) / 10)) +
          (((cv[3] * 2) % 10) + (((cv[3] * 2) - ((cv[3] * 2) % 10)) / 10)) +
          (((cv[1] * 2) % 10) + (((cv[1] * 2) - ((cv[1] * 2) % 10)) / 10)) +
          (((dv[3] * 2) % 10) + (((dv[3] * 2) - ((dv[3] * 2) % 10)) / 10)) +
          (((dv[1] * 2) % 10) + (((dv[1] * 2) - ((dv[1] * 2) % 10)) / 10));
    sum += av[0] + av[2] + bv[0] + bv[2] + cv[0] + cv[2] + dv[0] + dv[2];
    // cout << sum << endl;
    if (sum % 10 == 0) {
      cout << "Valid" << endl;
    } else {
      cout << "Invalid" << endl;
    }
  }
  // system("pause");
  return 0;
}
