/*
From CodeForces "http://codeforces.com/problemset/problem//479/A"
*/
#include <cstdio>
#include <iostream>
using namespace std;
int main(void) {
  int a, b, c, sol = 0;
  cin >> a >> b >> c;
  sol = (a + b + c > sol) ? a + b + c : sol;
  sol = (a * b * c > sol) ? a * b * c : sol;
  sol = (a * b + c > sol) ? a * b + c : sol;
  sol = (a + b * c > sol) ? a + b * c : sol;
  sol = ((a + b) * c > sol) ? (a + b) * c : sol;
  sol = (a * (b + c) > sol) ? a * (b + c) : sol;
  printf("%d\n", sol);
}