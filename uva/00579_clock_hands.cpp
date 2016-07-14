/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=520"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  float HH, MM;
  scanf("%f:%f", &HH, &MM);

  while (!(HH == 0 && MM == 0)) {
    // cout << HH << " " << MM << endl;
    float angle = ((12 - HH) * 30) - ((MM / 60) * 30) + ((MM / 60) * 360);
    // cout << angle << endl;
    if (angle >= 180) {
      angle = 360 - angle;
    }
    while (angle < 0) {
      angle += 360;
    }
    if (angle >= 180) {
      angle = 360 - angle;
    }
    printf("%.3f\n", angle);
    scanf("%f:%f", &HH, &MM);
  }
  system("pause");
  return 0;
}
