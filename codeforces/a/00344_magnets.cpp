#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
  int temp, last, n, counter = 1;
  scanf("%d", &n);
  scanf("%d", &last);
  for (int i = 1; i < n; i++) {
    scanf("%d", &temp);
    if (temp != last) {
      counter++;
      last = temp;
    }
  }
  printf("%d\n", counter);
  // system("pause");
  return 0;
}
