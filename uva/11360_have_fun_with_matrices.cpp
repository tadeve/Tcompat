/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2345"
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vectoriez(long long a, unsigned int n) {
  vector<int> out;
  for (int i = 0; i < n; i++) {
    out.push_back(a % 10);
    a = (a - (a % 10)) / 10;
  }
  reverse(out.begin(), out.end());
  return out;
}
void printV(vector<vector<int>> &mat, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d", mat[i][j]);
    }
    printf("\n");
  }
}
void inc(vector<vector<int>> &matrix, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matrix[i][j] = (matrix[i][j] + 1) % 10;
    }
  }
}
void dec(vector<vector<int>> &matrix, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matrix[i][j] = matrix[i][j] - 1;
      if (matrix[i][j] < 0) {
        matrix[i][j] += 10;
      }
    }
  }
}
vector<vector<int>> transpose(vector<vector<int>> matrix, int n) {
  vector<vector<int>> outMatrix(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      outMatrix[j][i] = matrix[i][j];
    }
  }
  return outMatrix;
}
vector<vector<int>> row(vector<vector<int>> matrix, int a, int b, int n) {
  a--;
  b--;
  vector<vector<int>> outMatrix(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    outMatrix[a][i] = matrix[b][i];
    outMatrix[b][i] = matrix[a][i];
  }
  for (int i = 0; i < n; i++) {
    if (i != a && i != b) {
      for (int j = 0; j < n; j++) {
        outMatrix[i][j] = matrix[i][j];
      }
    }
  }
  return outMatrix;
}
vector<vector<int>> col(vector<vector<int>> matrix, int a, int b, int n) {
  a--;
  b--;
  vector<vector<int>> outMatrix(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    outMatrix[i][a] = matrix[i][b];
    outMatrix[i][b] = matrix[i][a];
  }
  for (int i = 0; i < n; i++) {
    if (i != a && i != b) {
      for (int j = 0; j < n; j++) {
        outMatrix[j][i] = matrix[j][i];
      }
    }
  }
  return outMatrix;
}

/*int main(void)
{
vector<vector<int>> grid (5,vector<int> (5,0));
int temp;
for(int i = 0 ; i < 5;i++)
{
for(int j = 0 ; j < 5;j++)
{
scanf("%d",&temp);
cout<<temp<<endl;
grid[i][j] = temp;
}
}
printV(grid);
vector<vector<int>> grid2 = transpose(grid,5);
printf("\n");
printV(grid2);
printf("\n");
vector<vector<int>> grid3 = row(grid,1,2,5);
printV(grid3);
printf("\n");
vector<vector<int>> grid4 = col(grid,1,2,5);
printV(grid4);
printf("\n");
return 0;
}*/
int main() {
  // freopen("C:\\Users\\Tarek
  // Ahmed\\ClionProjects\\Compattests\\log.txt","w",stdout);
  unsigned int T, n;
  scanf("%d", &T);

  for (int test = 1; test <= T; test++) {
    scanf("%d", &n);
    long long temp;
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
      scanf("%lld", &temp);
      // cout<<temp<<endl;
      matrix[i] = vectoriez(temp, n);
    }
    // printV(matrix,n);
    int ops;
    scanf("%d", &ops);
    string op;
    for (int i = 0; i <= ops; i++) {
      getline(cin, op);
      if (op[0] == 'i') {
        inc(matrix, n);
      } else if (op[0] == 'd') {
        dec(matrix, n);
      } else if (op[0] == 't') {
        matrix = transpose(matrix, n);
      } else if (op[0] == 'r') {
        int a, b;
        sscanf(op.c_str(), "row %d %d", &a, &b);
        matrix = row(matrix, a, b, n);
      } else if (op[0] == 'c') {
        int a, b;
        sscanf(op.c_str(), "col %d%d", &a, &b);
        matrix = col(matrix, a, b, n);
      }
    }
    printf("Case #%d\n", test);
    printV(matrix, n);
    printf("\n");
  }
  return 0;
}
