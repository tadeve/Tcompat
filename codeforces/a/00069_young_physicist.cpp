
#include <stdio.h>
int main(void) {
  int n, sumx = 0, sumy = 0, sumz = 0, tx, ty, tz;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &tx, &ty, &tz);
    sumx += tx;
    sumy += ty;
    sumz += tz;
  }
  if (sumx == 0 && sumy == 0 && sumz == 0)
    printf("YES\n");
  else
    printf("NO\n");
}