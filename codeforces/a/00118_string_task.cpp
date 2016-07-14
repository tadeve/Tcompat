#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(void) {
  string st, out = "";
  cin >> st;
  for (int i = 0, len = st.size(); i < len; i++) {
    if (st[i] >= 'a' && st[i] <= 'z' && st[i] != 'a' && st[i] != 'o' &&
        st[i] != 'y' && st[i] != 'e' && st[i] != 'u' && st[i] != 'i') {
      out += '.';
      out += st[i];
    } else if (st[i] >= 'A' && st[i] <= 'Z' && st[i] != 'A' && st[i] != 'O' &&
               st[i] != 'Y' && st[i] != 'E' && st[i] != 'U' && st[i] != 'I') {
      out += '.';
      out += (((st[i] - 'A') % 26) + 'a');
    }
  }
  cout << out << endl;
}