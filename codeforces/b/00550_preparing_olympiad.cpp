#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
  int n, l, r, x, cnt = 0;
  cin >> n >> l >> r >> x;
  vector<int> cs(n);
  for (int i = 0; i < n; i++) {
    cin >> cs[i];
  }
  for (int i = 0; i < (1 << n); i++) {
    vector<bool> bits(n);
    int temp = i;
    for (int j = n - 1; j > -1; j--) {
      bits[j] = temp & 1;
      temp >>= 1;
    }
    int mx = 0, mn = 1000001, sum = 0, nn = 0;
    for (int k = 0; k < n; k++) {
      if (bits[k]) {
        nn++;
        mx = max(cs[k], mx);
        mn = min(cs[k], mn);
        sum += cs[k];
      }
    }
    if (((mx - mn) >= x) && (sum >= l && sum <= r) && (nn >= 2)) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}