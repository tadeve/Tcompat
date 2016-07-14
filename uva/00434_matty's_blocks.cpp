/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=375"
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <sstream>
#include <algorithm>
#include <functional>

using namespace std;
void printVector(vector<int> const &v, const int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}
void printMatrix(vector<vector<int> > &mat,
                 int n)  // prints matrix each element followed by a space
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}
int main(void) {
  // freopen("C:\\Users\\Tarek Ahmed\\Desktop\\log.txt", "w", stdout);
  int T;
  scanf("%d", &T);
  while (T--) {
    int N;
    scanf("%d\n", &N);
    vector<int> front(N, 0);
    vector<int> right(N, 0);

    int sumFront = 0, sumRight = 0;
    int maxHight = 0, minHight = 9;
    for (int i = 0; i < N; i++) {
      scanf("%d", &front[i]);
      sumFront += front[i];
      maxHight = max(maxHight, front[i]);
      minHight = min(minHight, front[i]);
    }
    for (int i = 0; i < N; i++) {
      scanf("%d", &right[i]);
      sumRight += right[i];
      maxHight = max(maxHight, right[i]);
      minHight = min(minHight, right[i]);
    }
    int minimum = max(sumFront, sumRight);
    // std::reverse(right.begin(), right.end());
    int blocks = 0;
    vector<vector<int> > table(N, vector<int>(N, 0));
    vector<bool> xVisited(N, false);
    vector<bool> yVisited(N, false);
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if ((front[i] == right[j]) && !xVisited[i] && !yVisited[j]) {
          blocks += front[i];
          xVisited[i] = true;
          yVisited[j] = true;
        }
      }
    }
    for (int i = 0; i < N; i++) {
      if (!xVisited[i]) {
        blocks += front[i];
      }
      if (!yVisited[i]) {
        blocks += right[i];
      }
    }
    int minBlocks = blocks;
    vector<vector<int> > table2(N, vector<int>(N, 0));
    blocks = 0;
    for (int h = minHight; h <= maxHight; h++) {
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          if (h <= front[j] && h <= right[i] && h > table2[i][j]) {
            blocks -= table2[i][j];
            table2[i][j] = h;
            blocks += h;
          }
        }
      }
    }
    // printMatrix(table, N);
    cout << "Matty needs at least " << minBlocks
         << " blocks, and can add at most " << blocks - minBlocks
         << " extra blocks." << endl;
  }
  // system("pause");
  return 0;
}
