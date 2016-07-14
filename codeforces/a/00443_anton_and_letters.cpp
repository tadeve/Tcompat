#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  // freopen("in", "r", stdin);
  vector<bool> a(52, false);
  string s;
  getline(cin, s);
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      // cout << s[i] << " " << int(s[i] - 'a') << endl;
      a[(s[i] - 'a')] = true;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      // cout << s[i] << " " << int(s[i] - 'A' + 26) << endl;
      a[s[i] - 'A' + 26] = true;
    }
  }
  int counter = 0;
  for (int i = 0; i < 52; i++) {
    if (a[i]) {
      counter++;
    }
  }
  printf("%d\n", counter);
}
