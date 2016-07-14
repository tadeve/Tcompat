#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
  int n, laimak, can, counter = 0;
  bool some_equal = false;
  scanf("%d\n", &n);
  scanf("%d", &laimak);
  priority_queue<int> votes;
  for (int i = 0; i < n - 1; i++) {
    scanf("%d", &can);
    votes.push(can);
  }
  int k;
  while (laimak <= votes.top()) {
    laimak++;
    counter++;
    k = votes.top() - 1;
    votes.pop();
    votes.push(k);
  }
  printf("%d\n", counter);
  // system("pause");
  return 0;
}