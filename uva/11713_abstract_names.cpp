#include <cstdio>
#include <iostream>
#include <string>
#define is_vowel(x) (x == 'a' || x == 'e' || x == 'o' || x == 'u' || x == 'i')
using namespace std;

int main(void) {
  int T;
  scanf("%d\n", &T);
  for (int test = 0; test < T; test++) {
    string name1, name2;
    getline(cin, name1);
    getline(cin, name2);
    if (name1.length() == name2.length()) {
      bool valid = true;
      for (int i = 0; i < name1.length(); i++) {
        if ((!is_vowel(name1[i]) && !is_vowel(name2[i]) &&
             name1[i] == name2[i]) ||
            (is_vowel(name1[i]) && is_vowel(name2[i]))) {
          continue;
        } else {
          valid = false;
        }
      }
      if (valid)
        printf("Yes\n");
      else
        printf("No\n");

    } else {
      printf("No\n");
    }
  }
  return 0;
}
