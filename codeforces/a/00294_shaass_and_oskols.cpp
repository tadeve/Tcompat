#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  // freopen("in","r",stdin);
  // freopen("out","w",stdout);
  int wires, shots, x, y;
  scanf("%d", &wires);
  vector<int> birds(wires);
  for (int i = 0; i < wires; i++) {
    scanf("%d", &birds[i]);
  }
  scanf("%d", &shots);
  for (int i = 0; i < shots; i++) {
    scanf("%d%d", &x, &y);
    x--;
    if (x == (wires - 1)) {
      birds[x] = 0;
      birds[x - 1] += y - 1;
    } else if (x == 0) {
      birds[x] -= y;
      birds[x + 1] += birds[x];
      birds[x] = 0;
    } else {
      birds[x - 1] += y - 1;
      birds[x + 1] += birds[x] - y;
      birds[x] = 0;
    }
  }
  for (auto i : birds) cout << i << endl;
}