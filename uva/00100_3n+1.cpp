/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=36"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <iostream>
#include <string>
#define MAX 100000000
using namespace std;
int main(void) {
  // map<int, int> mem;
  vector<int> mem(MAX, 0);
  mem[0] = -1;
  mem[1] = 1;
  mem[2] = 2;
  mem[4] = 3;
  mem[8] = 4;
  mem[16] = 5;
  int ain, bin, cycle = 0;
  while (cin >> ain >> bin) {
    int a1, b;
    a1 = (ain < bin) ? ain : bin;
    b = (bin > ain) ? bin : ain;
    int maxc = 0;
    for (int i = a1; i <= b; i++) {
      cycle = 0;
      int a = i;
      while (a >= 1) {
        if (a < 100000000 && mem[a] != 0) {
          // cout << "ma : " << a << " || mem[a] : " << mem[a] << endl;
          cycle += mem[a];
          a = 0;
        } else {
          if (a % 2 == 0) {
            a /= 2;
            cycle++;

          } else {
            a = (3 * a) + 1;
            cycle++;
          }
        }
      }
      if (mem[i] == 0) mem[i] = cycle;
      maxc = (maxc > cycle) ? maxc : cycle;
      // cout << "input :" << i << " || c : " << cycle << endl;
    }
    cout << ain << " " << bin << " " << maxc << endl;
  }
  // system("pause");
  return 0;
}
