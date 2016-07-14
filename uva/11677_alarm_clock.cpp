/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2724"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
  int h1, m1, h2, m2;
  cin >> h1 >> m1 >> h2 >> m2;
  while (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0) {
    if (h1 == h2) {
      if (m1 == m2) {
        cout << 0 << endl;
      } else if (m2 > m1) {
        cout << m2 - m1 << endl;
      } else {
        cout << 1440 - (m1 - m2) << endl;
      }
    } else if (h2 > h1) {
      if (m2 == m1) {
        cout << (h2 - h1) * 60 << endl;
      } else if (m2 > m1) {
        cout << ((h2 - h1) * 60) + (m2 - m1) << endl;
      } else {
        cout << ((h2 - h1) * 60) - (m1 - m2) << endl;
      }
    } else {
      cout << (1440 - (h1 * 60) - m1) + (h2 * 60) + m2 << endl;
    }
    cin >> h1 >> m1 >> h2 >> m2;
  }
  // system("pause");
  return 0;
}
