/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2954"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  vector<int> sides(3);
  scanf("%d%d%d", &sides[0], &sides[1], &sides[2]);
  while (sides[0] != 0 && sides[1] != 0 && sides[2] != 0) {
    sort(sides.begin(), sides.end());
    bool right = ((sides[0] * sides[0]) + (sides[1] * sides[1])) ==
                 (sides[2] * sides[2]);
    if (right) {
      printf("right\n");
    } else {
      printf("wrong\n");
    }
    scanf("%d%d%d", &sides[0], &sides[1], &sides[2]);
  }
  system("pause");
  return 0;
}
