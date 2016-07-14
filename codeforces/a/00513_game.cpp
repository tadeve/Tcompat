#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main(void) {
  int n1, n2, k1, k2, player1steps, player2steps;
  cin >> n1 >> n2 >> k1 >> k2;
  if (n1 == n2)
    cout << "Second" << endl;
  else if (n1 > n2)
    cout << "First" << endl;
  else if (n2 > n1)
    cout << "Second" << endl;
}