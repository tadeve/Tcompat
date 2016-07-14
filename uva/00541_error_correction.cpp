/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=482"
*/
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // freopen("C:\\Users\\Tarek
  // Ahmed\\ClionProjects\\Compattests\\log.txt","w",stdout);
  int n;
  scanf("%d", &n);
  while (n != 0) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    vector<int> sumsRow(n, 0);
    vector<int> sumsCol(n, 0);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &matrix[i][j]);
        sumsRow[i] += matrix[i][j];
        sumsCol[j] += matrix[i][j];
      }
    }
    int nCorrCols = 0;
    int nCorrRows = 0;
    vector<int> CorrCols;
    vector<int> CorrRows;
    for (int i = 0; i < n; i++) {
      if (sumsRow[i] % 2 != 0) {
        nCorrRows++;
        CorrRows.push_back(i);
      }
      if (sumsCol[i] % 2 != 0) {
        nCorrCols++;
        CorrCols.push_back(i);
      }
    }
    if (nCorrCols == 0 && nCorrRows == 0) {
      printf("OK\n");
    } else if (nCorrCols == 1 && nCorrRows == 1) {
      printf("Change bit (%d,%d)\n", CorrRows[0] + 1, CorrCols[0] + 1);
    } else {
      printf("Corrupt\n");
    }
    scanf("%d", &n);
  }

  return 0;
}
