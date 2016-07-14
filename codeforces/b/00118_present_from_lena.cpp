/*
From CodeForces "http://codeforces.com/problemset/problem/118/B"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  vector<vector<int>> pattern(N + 1, vector<int>(N + 1, -1));
  for (int i = 0; i < (N + 1); i++) {
    for (int j = 0; j < (N + 1); j++) {
      if ((i + j) >= N) {
        pattern[i][j] =
            ((N - (i + j) > 0) ? N - (i + j) : (i + j) - N) % (N + 1);
      }
    }
  }
  for (int i = 0; i < (N + 1); i++) {
    for (int j = 0; j < (N + 1); j++) {
      if (pattern[i][j] == -1) {
        printf(" ");
      } else {
        printf("%d", pattern[i][j]);
      }
      if (i != 0 || j != N) printf(" ");
    }
    for (int j = N - 1; j >= 0; j--) {
      if (pattern[i][j] == -1) {
        printf("");
      } else {
        printf("%d", pattern[i][j]);
      }
      if (j != N - i && pattern[i][j] != -1) printf(" ");
    }
    printf("\n");
  }
  for (int i = N - 1; i >= 0; i--) {
    for (int j = 0; j < (N + 1); j++) {
      if (pattern[i][j] == -1) {
        printf(" ");
      } else {
        printf("%d", pattern[i][j]);
      }
      if (i != 0 || j != N) printf(" ");
    }
    for (int j = N - 1; j >= 0; j--) {
      if (pattern[i][j] == -1) {
        printf("");
      } else {
        printf("%d", pattern[i][j]);
      }
      if (j != N - i && pattern[i][j] != -1) printf(" ");
    }
    printf("\n");
  }
  // system("pause");
  return 0;
}