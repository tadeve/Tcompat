#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
  int a, b, carry = 0, counter = 0;
  scanf("%d%d", &a, &b);
  while (a > 0) {
    counter += a;
    carry += a % b;
    a -= a % b;
    a /= b;
    if (carry >= b) {
      a += (carry - (carry % b)) / b;
      carry = carry % b;
    }
    // cout << counter << " " << carry << " " << a << endl;
  }
  // cout << counter << " " << carry << " " << a << endl;
  printf("%d\n", counter);
  // system("pause");
  return 0;
}