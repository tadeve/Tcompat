/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2489"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  while (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0) {
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    if (deltaX == 0 && deltaY == 0) {
      printf("0\n");
    } else if (deltaX == 0 || deltaY == 0) {
      printf("1\n");
    } else if (deltaX == deltaY || deltaX == (-1 * deltaY)) {
      printf("1\n");
    } else {
      printf("2\n");
    }
    cin >> x1 >> y1 >> x2 >> y2;
  }
  // system("pause");
  return 0;
}
