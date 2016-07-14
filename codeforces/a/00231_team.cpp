/*
From CodeForces "http://codeforces.com/problemset/problem/231/A"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
  int N, counter = 0, n1, n2, n3;
  cin >> N;
  while (N--) {
    scanf("%d%d%d", &n1, &n2, &n3);
    if ((n1 == 1 && n2 == 1) || (n1 == 1 && n3 == 1) || (n2 == 1 && n3 == 1)) {
      counter++;
    }
  }
  cout << counter << endl;
  // system("pause");
  return 0;
}