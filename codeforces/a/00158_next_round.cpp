#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
  int n, k, temp, counter = 0;
  scanf("%d%d", &n, &k);
  int g[51] = {0};
  for (int i = 1; i <= n; i++) {
    scanf("%d", &temp);
    g[i] = temp;
  }
  for (int i = 1; i <= n; i++) {
    if (g[i] >= g[k] && g[i] > 0) {
      counter++;
    }
  }
  printf("%d\n", counter);
  // system("pause");
  return 0;
}