#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(void) {
  int n;
  scanf("%d", &n);
  string st;
  for (int i = 0; i < n; i++) {
    cin >> st;
    int a = st.size();
    if (a > 10) {
      printf("%c%d%c\n", st[0], a - 2, st[a - 1]);
    } else {
      cout << st << endl;
    }
  }
}