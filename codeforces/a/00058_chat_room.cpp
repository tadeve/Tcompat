#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main(void) {
  string s;
  string hello = "hello";
  int ptr = 0;
  cin >> s;
  rep(i, s.size()) {
    if (s[i] == hello[ptr]) {
      ptr++;
    }
  }
  if (ptr != 5) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}