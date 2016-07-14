#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
  int n, counter = 0;
  scanf("%d", &n);
  string g;
  cin >> g;
  int ptr = 0;
  int nt = n;
  while (ptr < nt) {
    ptr++;
    if (g[ptr] == g[ptr - 1]) {
      g.erase(ptr - 1, 1);
      // cout << ptr << " " << g << endl;
      ptr = 0;
      nt--;
      counter++;
    }
  }
  printf("%d\n", counter);
  // system("pause");
  return 0;
}