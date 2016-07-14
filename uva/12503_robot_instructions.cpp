/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3947"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
  int T;
  cin >> T;
  while (T--) {
    int N, p = 0;
    cin >> N;
    string temp;
    vector<int> instructions;
    while (N--) {
      cin >> temp;
      // cout << temp << endl;
      if (temp == "LEFT") {
        instructions.push_back(-1);
        p--;
      } else if (temp == "RIGHT") {
        instructions.push_back(1);
        p++;
      } else {
        int i;
        cin >> temp;
        cin >> i;
        // cout << i << endl;
        instructions.push_back(instructions[i - 1]);
        p += instructions[i - 1];
      }
    }
    cout << p << endl;
  }
  // system("pause");
  return 0;
}
