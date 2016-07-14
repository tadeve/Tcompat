/*
From CodeForces "http://codeforces.com/problemset/problem/122/A"
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
  vector<int> lucky = {4,   7,   44,  77,  47,  74,  444, 447,
                       474, 474, 477, 744, 747, 774, 777};
  int N;
  bool flag = false;
  cin >> N;
  for (int i = 0; i < 16; i++) {
    if (N % lucky[i] == 0) {
      flag = true;
      break;
    }
  }
  if (flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  // system("pause");
  return 0;
}