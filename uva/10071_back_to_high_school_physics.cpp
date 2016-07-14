/*
        From UVA
   "https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1012"
*/
#include <stdio.h>
using namespace std;
int main(void) {
  int tn, vn;
  double x, a;
  while (scanf("%d%d", &tn, &vn)) {
    printf("%d", tn * vn * 2);
  }
  return 0;
}
