#include <cstdio>
#include <vector>
#include <iostream>
#define repeat(variable, begin, times) \
  for (int variable = begin; variable < times + begin; variable++)
using namespace std;
long long max(long long x, long long y) { return (x > y) ? x : y; }
int main(void) {
  long long n, t;
  scanf("%lld%lld", &n, &t);
  vector<int> books(n, 0);
  repeat(i, 0, n) { scanf("%d", &books[i]); }
  int start = 0, end = 0;
  long long maxlen = 0, sum = 0;
  while (start != n && end != n) {
    if (sum + books[end] <= t) {
      sum += books[end];
      end++;
      // cout<<"+sum: "<<sum<<" +start: "<<start<<" +end: "<<end<<endl;
    } else {
      sum -= books[start];
      start++;
      // cout<<"-sum: "<<sum<<" -start: "<<start<<" -end: "<<end<<endl;
    }
    maxlen = max(maxlen, end - start);
  }
  printf("%lld\n", maxlen);
}