#include <cstdio>
#include <vector>
using namespace std;
int main(void) {
  int N, R, C, K;
  scanf("%d%d%d%d", &N, &R, &C, &K);
  while (!(N == 0 && R == 0 && C == 0 && K == 0)) {
    vector<vector<int> > kingdom(R, vector<int>(C, 0));
    vector<vector<int> > temp_kingdom(R, vector<int>(C, 0));
    for (int i = 0; i < R; i++) {
      for (int j = 0; j < C; j++) {
        scanf("%d", &kingdom[i][j]);
        temp_kingdom[i][j] = kingdom[i][j];
      }
    }
    for (int battle = 0; battle < K; battle++) {
      for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
          if ((i > 0) && (((kingdom[i][j] + 1) % N) == kingdom[i - 1][j])) {
            temp_kingdom[i - 1][j] = kingdom[i][j];
          }
          if (((i + 1) < R) &&
              (((kingdom[i][j] + 1) % N) == kingdom[i + 1][j])) {
            temp_kingdom[i + 1][j] = kingdom[i][j];
          }
          if ((j > 0) && (((kingdom[i][j] + 1) % N) == kingdom[i][j - 1])) {
            temp_kingdom[i][j - 1] = kingdom[i][j];
          }
          if (((j + 1) < C) &&
              (((kingdom[i][j] + 1) % N) == kingdom[i][j + 1])) {
            temp_kingdom[i][j + 1] = kingdom[i][j];
          }
        }
      }
      for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
          kingdom[i][j] = temp_kingdom[i][j];
        }
      }
    }
    for (int i = 0; i < R; i++) {
      for (int j = 0; j < C - 1; j++) {
        printf("%d ", kingdom[i][j]);
      }
      printf("%d\n", kingdom[i][C - 1]);
    }

    scanf("%d%d%d%d", &N, &R, &C, &K);
  }
  return 0;
}