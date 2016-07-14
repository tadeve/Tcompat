#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#define not_ws(x) x != ' ' && x != '\t' && x != '\n'
using namespace std;
void reverse_word(string &s) {
  for (int j = 0, len = s.length(); j < len / 2; j++) {
    char temp = s[j];
    s[j] = s[len - j - 1];
    s[len - j - 1] = temp;
  }
}
void print_arr(vector<string> vs) {
  for (int i = 0, len = vs.size(); i < len - 1; i++) {
    printf("%s ", vs[i].c_str());
  }
  printf("%s\n", vs[vs.size() - 1].c_str());
}
int main(void) {
  string s;
  while (getline(cin, s)) {
    vector<string> vs;
    string temp = "";
    for (int i = 0, len = s.length(); i < len; i++) {
      if (not_ws(s[i])) {
        temp += s[i];
      } else {
        vs.push_back(temp);
        temp = "";
      }
    }
    vs.push_back(temp);
    // print_arr(vs);
    for (int i = 0, len = vs.size(); i < len; i++) {
      reverse_word(vs[i]);
    }
    print_arr(vs);
  }
}