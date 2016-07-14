#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
int nearst_sqrt(int number) {
  int i = 1;
  while (i * i < number) {
    i++;
  }
  return i;
}
int main() {
  const int LIMIT = 100000, N_SQUARES = nearst_sqrt(LIMIT);
  string line;
  int a, b;
  int solutions[200];
  getline(cin, line);
  int s = 0;
  do {
    stringstream passer(line);
    passer >> a >> b;
    int first = nearst_sqrt(a);
    int last = nearst_sqrt(b);
    int sol = 0;
    if (last * last == b) {
      sol++;
    }
    sol += (last - first);
    solutions[s] = sol;
    s++;
    getline(cin, line);
  } while (line != "0 0");
  for (int i = 0; i < s; i++) {
    printf("%d\n", solutions[i]);
  }

  return 0;
}
// first submition = 15869478
// second submition = 15869519
// third submition = 15869599
// accepted
