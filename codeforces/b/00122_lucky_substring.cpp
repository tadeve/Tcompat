#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main(void) {
  string s;
  cin >> s;
  int fours = 0, sevens = 0;
  rep(i, s.size()) {
    if (s[i] == '4')
      fours++;
    else if (s[i] == '7')
      sevens++;
  }
  if (fours == 0 && sevens == 0)
    cout << -1 << endl;
  else if (sevens > fours)
    cout << 7 << endl;
  else
    cout << 4 << endl;
}