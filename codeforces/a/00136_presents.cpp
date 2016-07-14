#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
  int n, temp;
  scanf("%d", &n);
  int g[101] = {0};
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    g[temp] = i + 1;
  }
  for (int i = 1; i <= n; i++) {
    printf("%d ", g[i]);
  }
  printf("\n");
  // system("pause");
  return 0;
}