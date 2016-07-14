/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2864"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#define MAX 100000000
using namespace std;
int main(void) {
  int T, counter = 1;
  cin >> T;
  while (T--) {
    int N, ups = 0, downs = 0, temp1, temp2;
    cin >> N;
    cin >> temp1;
    for (int i = 1; i < N; i++) {
      cin >> temp2;
      if (temp2 > temp1) ups++;
      if (temp2 < temp1) downs++;
      temp1 = temp2;
    }
    cout << "Case " << counter << ": " << ups << " " << downs << endl;
    counter++;
  }
  // system("pause");
  return 0;
}
