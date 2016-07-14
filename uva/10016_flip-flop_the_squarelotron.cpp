/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=957"
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <sstream>
#include <algorithm>
#include <functional>
using namespace std;
void scanIntMatrix(
    vector<vector<int>> &mat,
    int n)  // scans matrix of ints if numbers are space seperated
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &mat[i][j]);
    }
    scanf("\n");
  }
}

void printMatrix(vector<vector<int>> const &mat,
                 int n)  // prints matrix each element followed by a space
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j != n - 1) {
        printf("%d ", mat[i][j]);
      } else {
        printf("%d\n", mat[i][j]);
      }
    }
  }
}

vector<vector<int>> flipRightLeft(vector<vector<int>> const matrix, int n) {
  vector<vector<int>> outMatrix(n, vector<int>(n, 0));
  int midway = n / 2;
  for (int j = 0; j <= midway; j++) {
    for (int i = 0; i < n; i++) {
      outMatrix[i][j] = matrix[i][n - j - 1];
      outMatrix[i][n - j - 1] = matrix[i][j];
    }
  }
  return outMatrix;
}

vector<vector<int>> flipDownUp(vector<vector<int>> const matrix, int n) {
  vector<vector<int>> outMatrix(n, vector<int>(n, 0));
  int midway = n / 2;
  for (int j = 0; j <= midway; j++) {
    for (int i = 0; i < n; i++) {
      outMatrix[j][i] = matrix[n - j - 1][i];
      outMatrix[n - j - 1][i] = matrix[j][i];
    }
  }
  return outMatrix;
}

vector<vector<int>> flipMainDiagonal(vector<vector<int>> const matrix, int n) {
  vector<vector<int>> outMatrix(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      outMatrix[j][i] = matrix[i][j];
    }
  }
  return outMatrix;
}

vector<vector<int>> flipInverseDiagonal(vector<vector<int>> const matrix,
                                        int n) {
  vector<vector<int>> outMatrix(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      outMatrix[j][i] = matrix[n - i - 1][n - j - 1];
    }
  }
  return outMatrix;
}

vector<vector<int>> getInnerMatrix(vector<vector<int>> const &matrix, int n,
                                   int layer) {
  vector<vector<int>> outMatrix(n - (2 * layer),
                                vector<int>(n - (2 * layer), 0));
  for (int i = layer; i < n - layer; i++) {
    for (int j = layer; j < n - layer; j++) {
      outMatrix[i - layer][j - layer] = matrix[i][j];
    }
  }
  return outMatrix;
}

void writeInnerMatrix(vector<vector<int>> &matrix,
                      vector<vector<int>> const &innerMatrix, int n,
                      int layer) {
  for (int i = layer; i < n - layer; i++) {
    for (int j = layer; j < n - layer; j++) {
      matrix[i][j] = innerMatrix[i - layer][j - layer];
    }
  }
}

vector<vector<int>> opOnLayer(
    function<vector<vector<int>>(vector<vector<int>> const, int)> operation,
    vector<vector<int>> const matrix, int const n, int const layer) {
  vector<vector<int>> outMatrix = matrix;
  if (n - (2 * layer) != 1) {
    vector<vector<int>> opMatrix = getInnerMatrix(matrix, n, layer);
    if (n - (2 * (layer - 1)) > 1) {
      vector<vector<int>> opInnerMatrix = getInnerMatrix(matrix, n, layer + 1);
      opMatrix = operation(opMatrix, n - (2 * layer));
      writeInnerMatrix(outMatrix, opMatrix, n, layer);
      writeInnerMatrix(outMatrix, opInnerMatrix, n, layer + 1);

    } else {
      opMatrix = operation(opMatrix, n - (2 * layer));
      writeInnerMatrix(outMatrix, opMatrix, n, layer);
    }
  }
  return outMatrix;
}

// the other most layer is layer number 0
int main() {
  // freopen("C:\\Users\\Tarek Ahmed\\Desktop\\log.txt","w",stdout);
  int T, N;
  scanf("%d\n", &T);
  while (T--) {
    scanf("%d\n", &N);
    int nLayers = (N % 2 == 0) ? (N / 2) : ((N + 1) / 2);
    vector<vector<int>> matrix(N, vector<int>(N, 0));
    scanIntMatrix(matrix, N);
    // printMatrix(matrix, N);
    for (int i = 0; i < nLayers; i++) {
      int nops, op;
      scanf("%d", &nops);
      while (nops--) {
        scanf("%d", &op);
        switch (op) {
          case 1:
            matrix = opOnLayer(flipDownUp, matrix, N, i);
            // printMatrix(matrix, N);
            // printf("1 -----\n");
            break;
          case 2:
            // printMatrix(matrix, N);
            // printf("bfore 2 -----\n");
            matrix = opOnLayer(flipRightLeft, matrix, N, i);
            // printMatrix(matrix, N);
            // printf("after 2 -----\n");
            break;
          case 3:
            matrix = opOnLayer(flipMainDiagonal, matrix, N, i);
            // printMatrix(matrix, N);
            // printf("3 -----\n");
            break;
          case 4:
            matrix = opOnLayer(flipInverseDiagonal, matrix, N, i);
            // printMatrix(matrix, N);
            // printf("4 -----\n");
            break;
        }
      }
    }
    printMatrix(matrix, N);
  }
  // system("pause");
  return 0;
}
