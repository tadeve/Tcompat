#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
  int n, temp;
  cin >> n;
  vector<int> odds;
  vector<int> evens;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp % 2 == 0)
      evens.push_back(i + 1);
    else
      odds.push_back(i + 1);
  }
  if (evens.size() == 1)
    cout << evens[0] << endl;
  else if (odds.size() == 1)
    cout << odds[0] << endl;
}