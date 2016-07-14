
#include <cstdio>
#include <iostream>
#include <set>

using namespace std;

int main(void) {
  // freopen("in", "r", stdin);
  int n, x0, y0;
  scanf("%d%d%d", &n, &x0, &y0);
  set<double> slops;
  double x, y;
  bool ver = false;
  for (int i = 0; i < n; i++) {
    scanf("%lf%lf", &x, &y);
    if (x - x0 == 0) {
      ver = true;
    } else {
      slops.insert(((y - y0) / (x - x0)));
    }
  }
  int shots = slops.size();
  if (ver) shots++;
  cout << shots << endl;
}