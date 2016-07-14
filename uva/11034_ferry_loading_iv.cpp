/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1975"
*/
#include <cstdio>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#define repeat(variable, begin, times) \
  for (int variable = begin; variable < times + begin; variable++)
using namespace std;
int main() {
  int Ncases;
  scanf("%d", &Ncases);
  repeat(Case, 0, Ncases) {
    int flength, Ncars, carlength, trips = 0;
    scanf("%d%d", &flength, &Ncars);
    flength *= 100;
    queue<int> right;
    queue<int> left;
    string bank;
    repeat(car, 0, Ncars) {
      cin >> carlength >> bank;
      if (bank == "right")
        right.push(carlength);
      else if (bank == "left")
        left.push(carlength);
    }
    int current = 0;
    while (!right.empty() || !left.empty()) {
      if (current == 0 && !left.empty()) {
        int temp = flength;
        while (!left.empty() && left.front() <= temp) {
          temp -= left.front();
          left.pop();
        }
        trips++;
        current = 1;
      } else if (current == 1 && !right.empty()) {
        int temp = flength;
        while (!right.empty() && right.front() <= temp) {
          temp -= right.front();
          right.pop();
        }
        trips++;
        current = 0;
      } else {
        trips++;
        if (current)
          current = 0;
        else
          current = 1;
      }
    }
    cout << trips << endl;
  }
  // system("pause");
}
