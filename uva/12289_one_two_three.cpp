#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
  int n;
  string one = "one", two = "two", three = "three";
  scanf("%d\n", &n);
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    if (s.length() == three.length()) {
      printf("%d\n", 3);
    } else {
      int o = 0;
      for (int j = 0; j < 3; j++) {
        if (one[j] == s[j]) {
          o++;
        }
      }
      if (o >= 2) {
        printf("%d\n", 1);
      } else {
        printf("%d\n", 2);
      }
    }
  }
  return 0;
}