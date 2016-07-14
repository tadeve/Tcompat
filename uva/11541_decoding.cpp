#include <cstdio>
#include <iostream>
#include <string>
#define is_alpha(x) (x <= 'Z' && x >= 'A')
using namespace std;
int count_alpha(string s) {
  int k = 0;
  for (int i = 0; i < s.length(); i++) {
    if (is_alpha(s[i])) {
      k++;
    }
  }
  return k;
}
int main(void) {
  int T;
  scanf("%d", &T);
  getchar();
  for (int test = 0; test < T; test++) {
    string s, out = "";
    getline(cin, s);
    int k = count_alpha(s), idx = 0, rep = 0;
    char temp;
    for (int i = 0; i < k; i++) {
      temp = s[idx];
      sscanf(&s.c_str()[idx], "%c%d", &temp, &rep);
      for (int j = 0; j < rep; j++) out += s[idx];
      do {
        idx++;
      } while (!is_alpha(s[idx]));
    }
    cout << "Case " << test + 1 << ": " << out << '\n';
  }
  return 0;
}
