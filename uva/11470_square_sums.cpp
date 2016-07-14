/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2465"
*/
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // freopen("C:\\Users\\Tarek
  // Ahmed\\ClionProjects\\Compattests\\log.txt","w",stdout);
  int n, t = 0;
  scanf("%d", &n);
  while (n != 0) {
    t++;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &grid[i][j]);
      }
    }
    int layers = (n % 2 == 0) ? (n / 2) : ((n + 1) / 2);
    // cout<<layers<<endl;
    vector<int> sol(layers, 0);
    for (int l = 0; l < layers; l++) {
      for (int i = l; i < n - l; i++) {
        for (int j = l; j < n - l; j++) {
          sol[l] += grid[i][j];
        }
      }
    }
    sort(sol.begin(), sol.end());
    int sum = sol[0];
    for (int i = 1; i < layers; i++) {
      sol[i] -= sum;
      sum += sol[i];
    }
    sort(sol.rbegin(), sol.rend());

    printf("Case %d:", t);
    for (int i = 0; i < layers; i++) {
      printf(" %d", sol[i]);
    }
    printf("\n");
    scanf("%d", &n);
  }
  return 0;
}
