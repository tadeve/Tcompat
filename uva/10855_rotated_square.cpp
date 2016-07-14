/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1796"
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<char> > rotate(vector<vector<char> > &matrix, int n) {
  vector<vector<char> > outMatrix(n, vector<char>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      outMatrix[i][j] = matrix[n - j - 1][i];
    }
  }
  return outMatrix;
}
void printMatrix(vector<vector<char> > &mat,
                 int n)  // prints matrix each element followed by a space
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%c ", mat[i][j]);
    }
    printf("\n");
  }
}
void scanMatrix(vector<vector<char> > &mat, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf(" %c", &mat[i][j]);
    }
  }
}
int countOccr(vector<vector<char> > &matrixBig,
              vector<vector<char> > &matrixSmall, int n, int N) {
  int counter = 0;
  for (int i = 0; i <= N - n; i++) {
    for (int j = 0; j <= N - n; j++) {
      bool equal = true;
      for (int in = 0; in < n; in++) {
        if (equal) {
          for (int jn = 0; jn < n; jn++) {
            if (matrixBig[i + in][j + jn] != matrixSmall[in][jn]) {
              equal = false;
              break;
            }
          }
        }
      }
      if (equal) {
        counter++;
      }
    }
  }
  return counter;
}
int main() {
  // freopen("C:\\Users\\Tarek
  // Ahmed\\ClionProjects\\Compattests\\log.txt","w",stdout);
  int n, N;
  scanf("%d%d", &N, &n);
  while (N != 0 && n != 0) {
    vector<vector<char> > matrixBig(N, vector<char>(N, 0));
    scanMatrix(matrixBig, N);
    // printMatrix(matrixBig, N);
    vector<vector<char> > matrixSmall(n, vector<char>(n, 0));
    scanMatrix(matrixSmall, n);
    // printMatrix(matrixSmall, n);
    vector<vector<char> > matrixSmall90 = rotate(matrixSmall, n);
    // printMatrix(matrixSmall90, n);
    vector<vector<char> > matrixSmall180 = rotate(matrixSmall90, n);
    // printMatrix(matrixSmall180, n);
    vector<vector<char> > matrixSmall270 = rotate(matrixSmall180, n);
    // printMatrix(matrixSmall270, n);
    cout << countOccr(matrixBig, matrixSmall, n, N) << " "
         << countOccr(matrixBig, matrixSmall90, n, N) << " "
         << countOccr(matrixBig, matrixSmall180, n, N) << " "
         << countOccr(matrixBig, matrixSmall270, n, N) << endl;

    scanf("%d%d", &N, &n);
  }
  // system("pause");
  return 0;
}
