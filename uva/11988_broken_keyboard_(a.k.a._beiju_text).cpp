#include <cstdio>
#include <iostream>
#include <list>
#include <string>
#define repeat(iterVariable, noIterations, beginning)                         \
  for (int iterVariable = beginning; iterVariable < noIterations + beginning; \
       iterVariable++)
using namespace std;

int main(void) {
  // freopen("in","r",stdin);
  // freopen("out","w",stdout);
  string s;
  while (getline(cin, s)) {
    list<char> ls;
    list<char>::iterator it = ls.end();
    repeat(i, s.size(), 0) {
      if (s[i] == '[') {
        it = ls.begin();
      } else if (s[i] == ']') {
        it = ls.end();
      } else {
        ls.insert(it, s[i]);
      }
    }
    for (auto ch : ls) cout << ch;
    cout << endl;
  }
  return 0;
}
