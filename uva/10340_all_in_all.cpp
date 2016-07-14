#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  string s1, s2;
  while (cin >> s1) {
    cin >> s2;
    if (s2.length() >= s1.length()) {
      int i, j = 0;
      for (i = 0; i < s2.length(); i++)
        if (s2[i] == s1[j]) j++;
      if (j == s1.length()) {
        printf("Yes\n");
      } else {
        printf("No\n");
      }
    } else {
      printf("No\n");
    }
  }
  return 0;
}
