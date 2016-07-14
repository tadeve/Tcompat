/*
       From UVA
   "https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1724"
*/
#include <vector>
#include <iostream>
using namespace std;
int main(void) {
  int T, a, b, n1, n2;
  vector<int> sols;
  cin >> T;
  while (T--) {
    cin >> a;
    cin >> b;
    int res = 0;
    if (a % 2 == 0) {
      n1 = a / 2;
    } else {
      n1 = (a + 1) / 2;
      res += a;
    }
    if (b % 2 == 0) {
      n2 = b / 2;
    } else {
      n2 = (b + 1) / 2;
    }
    res += (n2 * n2) - (n1 * n1);
    sols.push_back(res);
  }
  for (int i = 0, len = sols.size(); i < len; i++) {
    cout << "Case " << i + 1 << ": " << sols[i] << endl;
  }
  return 0;
}
