#include <cstdio>
#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <list>
#include <string>
using namespace std;
void push_left(list<int> &ls, list<int>::iterator &i, int n) {
  ls.insert(i, n);
  i--;
}
void push_right(list<int> &ls, list<int>::iterator &i, int n) {
  if (i == ls.end()) {
    ls.push_back(n);

  } else {
    i++;
    ls.insert(i, n);
    i--;
  }
}
void printlist(const list<int> ls) {
  for (auto i : ls) printf("%d\n", i);
}
int main(void) {
  // freopen("in","r",stdin);freopen("out","w",stdout);
  string moves;
  getline(cin, moves);
  list<int> order;
  order.push_back(1);
  list<int>::iterator it = order.begin();
  if (moves.size() == 1) {
    printf("1");
    return 0;
  }
  if (moves[0] == 'l') {
    order.push_front(2);
    it--;
  } else if (moves[0] == 'r') {
    order.push_back(2);
    it++;
  }
  for (int i = 1, len = moves.size() - 1; i < len; i++) {
    if (moves[i] == 'l') {
      push_left(order, it, i + 2);
    } else if (moves[i] == 'r') {
      push_right(order, it, i + 2);
    }
  }
  printlist(order);
  return 0;
}