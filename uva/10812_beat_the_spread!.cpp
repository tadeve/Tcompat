/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1753"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  // freopen("logfile.txt","w",stdout);
  long long T, sum, diff;
  cin >> T;
  while (T--) {
    long long a, b;
    cin >> sum >> diff;
    // cout << sum << " " << diff << endl;
    if (sum >= diff && (sum + diff) % 2 == 0 && (sum - diff) % 2 == 0) {
      a = (sum + diff) / 2;
      b = (sum - diff) / 2;
      if (a >= 0 && b >= 0) {
        printf("%lld %lld\n", a, b);
      } else {
        printf("impossible\n");
      }
    } else {
      printf("impossible\n");
    }
  }
  // system("pause");
  return 0;
}
