#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
  string s;
  int casee = 1;
  while (getline(cin, s)) {
    int grid[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int ix, jx;
    for (int i = 0, len = s.length(); i < len; i++) {
      jx = (int)((s[i] - 'a') % 3);
      ix = ((int)(s[i] - 'a') - jx) / 3;
      grid[ix][jx]++;
      grid[ix][jx] %= 10;
      if (ix > 0) {
        grid[ix - 1][jx]++;
        grid[ix - 1][jx] %= 10;
      }
      if (ix + 1 < 3) {
        grid[ix + 1][jx]++;
        grid[ix + 1][jx] %= 10;
      }
      if (jx > 0) {
        grid[ix][jx - 1]++;
        grid[ix][jx - 1] %= 10;
      }
      if (jx + 1 < 3) {
        grid[ix][jx + 1]++;
        grid[ix][jx + 1] %= 10;
      }
    }
    printf("Case #%d:\n", casee);
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
        printf("%d ", grid[i][j]);
      }
      printf("%d\n", grid[i][2]);
    }
    casee++;
  }
}