#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void solve(vector<string> dict, string &rule, string printable, int rule_ptr) {
  if (rule_ptr == rule.length()) {
    cout << printable << '\n';
    return;
  }
  if (rule[rule_ptr] == '#') {
    for (int i = 0; i < dict.size(); i++) {
      solve(dict, rule, printable + dict[i], rule_ptr + 1);
    }
  } else if (rule[rule_ptr] == '0') {
    for (int i = 0; i < 10; i++) {
      solve(dict, rule, printable + (char)(i + '0'), rule_ptr + 1);
    }
  }
}
int main(void) {
  int n;
  while (scanf("%d\n", &n) == 1) {
    printf("--\n");
    vector<string> dict(n);
    for (int i = 0; i < n; i++) {
      getline(cin, dict[i]);
    }
    int k;
    scanf("%d\n", &k);
    vector<string> rules(k);
    for (int i = 0; i < k; i++) {
      getline(cin, rules[i]);
    }
    for (int i = 0; i < k; i++) {
      solve(dict, rules[i], "", 0);
    }
  }
}