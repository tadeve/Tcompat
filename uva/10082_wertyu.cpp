/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2489"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
map<char, char> qw;

int main(void) {
  qw[' '] = ' ';
  string r1 = "QWERTYUIOP[]\\";
  string r2 = "ASDFGHJKL;'";
  string r3 = "ZXCVBNM,./";
  string r4 = "1234567890-=";
  for (int i = 1, len = r1.length(); i < len; i++) {
    qw[r1[i]] = r1[i - 1];
  }
  for (int i = 1, len = r2.length(); i < len; i++) {
    qw[r2[i]] = r2[i - 1];
  }
  for (int i = 1, len = r3.length(); i < len; i++) {
    qw[r3[i]] = r3[i - 1];
  }
  for (int i = 1, len = r4.length(); i < len; i++) {
    qw[r4[i]] = r4[i - 1];
  }
  string line;
  while (getline(cin, line)) {
    for (int i = 0, len = line.length(); i < len; i++) {
      cout << qw[line[i]];
    }
    cout << endl;
  }

  // system("pause");
  return 0;
}
