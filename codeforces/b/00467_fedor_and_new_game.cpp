#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
  int n, m, k, cnt = 0;
  cin >> n >> m >> k;
  vector<int> xi(m);
  int fador;
  for (int i = 0; i < m; i++) {
    cin >> xi[i];
  }
  cin >> fador;
  for (int i = 0; i < m; i++) {
    xi[i] = xi[i] ^ fador;
    int counter = 0;
    while (xi[i] > 0) {
      if (xi[i] & 1) {
        counter++;
      }
      xi[i] >>= 1;
    }
    if (counter <= k) {
      cnt++;
    }
  }
  cout << cnt << endl;
  // system("pause");
  return 0;
}