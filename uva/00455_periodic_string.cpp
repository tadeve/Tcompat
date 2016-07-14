#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int get_two(const string s) {
  for (unsigned int i = 1; i <= s.length() / 2; i++) {
    if (s.substr(0, i) == s.substr(i, i)) {
      bool valid = true;
      for (int j = i; j < s.length(); j += i) {
        valid &= (s.substr(0, i) == s.substr(j, i));
      }
      if (valid) {
        return i;
      }
    }
  }
  return s.length();
}

int main(void) {
  int T;
  scanf("%d\n", &T);
  for (int test = 0; test < T; test++) {
    string s;
    scanf("\n");
    getline(cin, s);
    int p = get_two(s);

    printf("%d\n", p);
    if (test != T - 1) {
      printf("\n");
    }
  }
  return 0;
}
