#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int n, temp;
  cin >> n;
  vector<bool> a(3005, false);
  for (int i = 0; i < n; i++) {
    cin >> temp;
    a[temp] = true;
  }
  for (int i = 1; i < 3005; i++) {
    if (!a[i]) {
      cout << i << endl;
      return 0;
    }
  }
}