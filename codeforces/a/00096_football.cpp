#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  string k;
  cin >> k;
  char last = k[0];
  int counter = 0;
  for (int i = 0, len = k.size(); i < len; i++) {
    if (k[i] != last) {
      last = k[i];
      counter = 1;
    } else {
      counter++;
    }
    if (counter >= 7) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}