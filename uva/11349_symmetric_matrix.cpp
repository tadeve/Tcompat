/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2324"
*/
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  // freopen("logfile.txt", "w", stdout);
  int T;
  scanf("%d\n", &T);
  for (int t = 1; t <= T; t++) {
    int n;
    long long temp;
    char c1, c2, c3, c4;
    bool issym = true;
    scanf("%c%c%c%c%d", &c1, &c2, &c3, &c4, &n);
    vector<vector<long long>> grid(n, vector<long long>(n, 0));
    vector<vector<long long>> gridT(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%lld", &temp);
        if (temp < 0) {
          issym = false;
        }
        grid[i][j] = temp;
      }
    }
    if (issym) {
      for (int i = 0; i < n; i++) {
        if (issym) {
          for (int j = 0; j < n; j++) {
            if (grid[i][j] != grid[n - i - 1][n - j - 1]) {
              issym = false;
              break;
            }
          }
        } else {
          break;
        }
      }
    }
    if (issym) {
      printf("Test #%d: Symmetric.\n", t);
    } else {
      printf("Test #%d: Non-symmetric.\n", t);
    }
  }
  // system("pause");
  return 0;
}
