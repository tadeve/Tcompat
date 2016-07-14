#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main(void) {
  long long n;
  cin >> n;
  string reps = "abcd";
  string s;
  while (n > 4) {
    s += "abcd";
    n -= 4;
  }
  if (n > 0) {
    rep(i, n) { s += reps[i]; }
  }
  cout << s << endl;
}