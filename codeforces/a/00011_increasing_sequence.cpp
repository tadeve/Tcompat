#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
int main(void) {
  long long n, d, counter = 0, temp1, temp2;
  cin >> n >> d;
  cin >> temp1;
  rep(i, n - 1) {
    cin >> temp2;
    if (temp2 <= temp1) {
      int diff = temp1 - temp2;
      diff = diff - (diff % d);
      temp2 += diff + d;
      counter += (diff / d) + 1;
    }
    temp1 = temp2;
  }
  cout << counter << endl;
}