#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
  vector<long long> A, B;
  vector<long long> mna, mxb;
  long long na, nb, ka, kb;
  long long mx = -1000000001, mn = 1000000001;
  bool can = true;
  scanf("%lld%lld\n%lld%lld\n", &na, &nb, &ka, &kb);
  long long num;
  for (long long i = 0; i < na; i++) {
    scanf("%lld", &num);
    A.push_back(num);
  }
  for (long long i = 0; i < nb; i++) {
    scanf("%lld", &num);
    B.push_back(num);
  }
  for (long long i = 0; i < ka; i++) {
    mna.push_back(A[i]);
    mx = max(A[i], mx);
  }
  for (long long i = nb - kb; i < nb; i++) {
    mxb.push_back(B[i]);
    mn = min(B[i], mn);
  }

  if (mn <= mx) can = false;
  if (can) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}