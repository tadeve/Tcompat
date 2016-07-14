#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
  int T, n;
  scanf("%d", &T);
  const int TESTS = T;
  int solutions[TESTS][5];
  for (int test = 0; test < TESTS; test++) {
    scanf("%d", &n);
    solutions[test][0] = n;
    if (solutions[test][0] % 8 != 7) {
      solutions[test][4] = 0;
      if (solutions[test][0] % 4 == 0) {
        for (int i = 0; i * i <= solutions[test][0] && solutions[test][4] == 0;
             i += 2) {
          for (int j = 0;
               j * j <= solutions[test][0] && solutions[test][4] == 0; j += 2) {
            for (int k = 0;
                 k * k <= solutions[test][0] && solutions[test][4] == 0;
                 k += 2) {
              if ((i * i) + (j * j) + (k * k) == solutions[test][0]) {
                solutions[test][1] = i;
                solutions[test][2] = j;
                solutions[test][3] = k;
                solutions[test][4] = 1;
                break;
              }
            }
          }
        }
      } else {
        for (int i = 0; i * i <= solutions[test][0] && solutions[test][4] == 0;
             i++) {
          for (int j = 0;
               j * j <= solutions[test][0] && solutions[test][4] == 0; j++) {
            for (int k = 0;
                 k * k <= solutions[test][0] && solutions[test][4] == 0; k++) {
              if ((i * i) + (j * j) + (k * k) == solutions[test][0]) {
                solutions[test][1] = i;
                solutions[test][2] = j;
                solutions[test][3] = k;
                solutions[test][4] = 1;
                break;
              }
            }
          }
        }
      }
    } else {
      solutions[test][4] = 0;
      solutions[test][1] = 0;
      solutions[test][2] = 0;
      solutions[test][3] = 0;
    }
  }
  for (int i = 0; i < TESTS; i++) {
    if (solutions[i][4] == 1) {
      printf("%d %d %d\n", solutions[i][1], solutions[i][2], solutions[i][3]);
    } else {
      printf("-1\n");
    }
  }
  return 0;
}
