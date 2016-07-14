#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
int main(void) {
  int n, maxh = 0, minh = 101, minidx, maxidx;
  int sold[201] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &sold[i]);
    if (sold[i] > maxh) {
      maxh = sold[i];
      maxidx = i;
    }
    if (sold[i] < minh) {
      minh = sold[i];
      minidx = i;
    } else if (sold[i] == minh) {
      if (i > minidx) {
        minidx = i;
      }
    }
  }
  // cout << maxh << " " << maxidx << " " << minh <<" "<<minidx << endl;
  int steps;
  if (minidx == n - 1 && maxidx == 0) {
    steps = 0;
  } else if (minidx < maxidx) {
    steps = (maxidx) + (n - minidx - 2);
  } else {
    steps = (maxidx) + (n - minidx - 1);
  }
  printf("%d\n", steps);
  // system("pause");
  return 0;
}