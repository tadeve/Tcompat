#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
  int sum, limit;
  cin >> sum >> limit;
  vector<int> lowbit(limit);
  vector<int> res;
  bool possible = true;
  for (int i = 1; i <= limit; i++) {
    int temp = i, counter = 0;
    while (temp % 2 == 0) {
      temp >>= 1;
      counter++;
    }
    lowbit[i - 1] = (1 << counter);
  }
  int ss = 0, bit = limit - 1;
  while (ss < sum) {
    if (ss == sum) {
      break;
    }
    if ((sum - ss) >= lowbit[bit]) {
      ss += lowbit[bit];
      res.push_back(bit + 1);
    }
    bit--;
    if (bit < 0 && ss < sum) {
      possible = false;
      break;
    }
  }
  if (possible) {
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
    cout << endl;
  } else {
    cout << "-1" << endl;
  }
  // system("pause");
  return 0;
}