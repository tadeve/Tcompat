#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string clean_string(string s) {
  string o = "";
  for (int i = 0, len = s.length(); i < len; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      o += (s[i] - 'A' + 'a');
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      o += s[i];
    }
  }
  return o;
}
bool is_palindrom(string s) {
  for (int i = 0, len = s.length(); i < len / 2; i++) {
    if (s[i] != s[len - i - 1]) {
      return false;
    }
  }
  return true;
}
int main(void) {
  string s;
  getline(cin, s);
  while (s != "DONE") {
    s = clean_string(s);
    if (is_palindrom(s)) {
      printf("You won't be eaten!\n");
    } else {
      printf("Uh oh..\n");
    }
    getline(cin, s);
  }
}