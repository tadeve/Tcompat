/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2489"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
unsigned long long reverse(unsigned long long number) {
  vector<int> digits;
  unsigned long long numberrev = 0;
  while (number != 0) {
    digits.push_back(number % 10);
    number = (number - (number % 10)) / 10;
  }
  unsigned long long power = 1;
  for (int i = digits.size() - 1; i > -1; i--) {
    numberrev += power * digits[i];
    power *= 10;
  }
  return numberrev;
}
bool is_pali(unsigned long long n) { return n == reverse(n); }
int main(void) {
  int T;
  cin >> T;
  while (T--) {
    unsigned long long n, counter = 0;
    cin >> n;
    while (!is_pali(n)) {
      // cout << n << " " << reverse(n) << endl;
      n += reverse(n);
      counter++;
    }
    cout << counter << " " << n << endl;
  }
  // system("pause");
  return 0;
}
