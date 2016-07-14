#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string get_line() {
  string s = "";
  char t;

  do {
    t = getchar();
    s += t;
  } while (t != '\n');
  return s;
}
void print_line(string s) {
  for (int i = 0; i < s.length(); i++) {
    putchar(s[i]);
  }
  if (s[s.length() - 1] != '\n') putchar('\n');
}
int main(void) {
  int T;
  scanf("%d", &T);
  getchar();
  for (int test = 0; test < T; test++) {
    int k;
    scanf("%d", &k);
    getchar();
    string s = "", temp;
    for (int i = 0; i < k; i++) {
      temp = get_line();
      bool last_was_space = false;
      for (int j = 0; j < temp.length(); j++) {
        if (temp[j] != ' ') {
          last_was_space = false;
          s += temp[j];
        } else if (temp[j] == ' ' && !last_was_space) {
          last_was_space = true;
          s += temp[j];
        }
      }
    }
    cout << "Case " << test + 1 << ":\n" << s;
    if (test != T - 1) {
      cout << '\n';
    }
  }
  return 0;
}
