#include <cstdio>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

void printMat(vector<vector<int>> in, int n, int m) {
  rep(i, n) {
    rep(j, m) { printf("%d ", in[i][j]); }
    printf("\n");
  }
}
vector<pair<int, int>> getCoords(const vector<vector<int>> &in, int n, int m,
                                 int elem) {
  vector<pair<int, int>> coords;
  rep(i, n) {
    rep(j, m) {
      if (in[i][j] == elem) {
        coords.push_back(make_pair(i, j));
      }
    }
  }
  return coords;
}
void overwrite(vector<vector<int>> &in, const vector<pair<int, int>> &coords,
               int n, int m, int elem) {
  rep(i, coords.size()) {
    rep(is, m) { in[coords[i].first][is] = elem; }
    rep(is, n) { in[is][coords[i].second] = elem; }
  }
}
bool compareMat(const vector<vector<int>> &v1, const vector<vector<int>> &v2,
                int n, int m) {
  rep(i, n) {
    rep(j, m) {
      if (v1[i][j] != v2[i][j]) {
        return false;
        break;
      }
    }
  }
  return true;
}
int main(void) {
  // freopen("in","r",stdin);
  // freopen("out","w",stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  vector<vector<int>> in(n, vector<int>(m, 0));
  vector<vector<int>> out(n, vector<int>(m, 1));
  vector<vector<int>> comp(n, vector<int>(m, 0));
  vector<pair<int, int>> coords;
  rep(i, n) {
    rep(j, m) {
      scanf("%d", &in[i][j]);
      if (in[i][j] == 0) {
        coords.push_back(make_pair(i, j));
      }
    }
  }
  overwrite(out, coords, n, m, 0);
  coords.clear();
  coords = getCoords(out, n, m, 1);
  overwrite(comp, coords, n, m, 1);
  if (compareMat(in, comp, n, m)) {
    printf("YES\n");
    printMat(out, n, m);
  } else {
    printf("NO\n");
  }
  return 0;
}