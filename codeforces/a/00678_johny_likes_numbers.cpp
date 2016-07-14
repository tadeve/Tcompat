#include <cstdio>
using namespace std;
int main(void) {
  int n, k, i;
  scanf("%d%d", &n, &k);
  for (i = 0; i <= n; i += k)
    ;
  printf("%d\n", i);
  return 0;
}