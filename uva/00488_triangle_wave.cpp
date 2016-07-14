/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=429"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  // freopen("logfile.txt", "w", stdout);
  int a[] = {0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
  int T, A, F;
  cin >> T;
  for (int test = 1; test <= T; test++) {
    scanf("%d\n%d", &A, &F);
    for (int i = 0; i < F; i++) {
      for (int j = 1; j <= A; j++) {
        printf("%d\n", j * a[j]);
      }
      for (int j = A - 1; j >= 1; j--) {
        printf("%d\n", j * a[j]);
      }
      if (!(test == T && i == (F - 1))) {
        printf("\n");
      };
    }
  }
  // system("pause");
  return 0;
}
