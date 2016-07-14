/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2612"
*/
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  freopen("logfile.txt", "w", stdout);
  int A, B, C, t;
  scanf("%d", &t);
  while (t--) {
    vector<vector<int>> sols;
    scanf("%d %d %d", &A, &B, &C);
    for (int x = -60; x <= 60; x++) {
      for (int y = -60; y <= 60; y++) {
        for (int z = -60; z <= 60; z++) {
          if ((x + y + z) == A && x * y * z == B &&
              (x * x) + (y * y) + (z * z) == C) {
            sols.push_back(vector<int>{x, y, z});
          }
        }
      }
    }
    if (sols.size() == 0) {
      printf("No solution.\n");
    } else {
      int fx = sols[0][0], fy = sols[0][1], fz = sols[0][2];
      for (int i = 0, len = sols.size(); i < len; i++) {
        if (sols[i][0] < fx) {
          fx = sols[i][0];
          fy = sols[i][1];
          fz = sols[i][2];
        } else if (sols[i][1] < fy) {
          fx = sols[i][0];
          fy = sols[i][1];
          fz = sols[i][2];
        } else if (sols[i][2] < fz) {
          fx = sols[i][0];
          fy = sols[i][1];
          fz = sols[i][2];
        }
      }
      printf("%d %d %d\n", fx, fy, fz);
    }
  }
  system("pause");
  return 0;
}
