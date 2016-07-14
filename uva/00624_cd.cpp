#include <cstdio>
#include <vector>
using namespace std;
int sum_mask(vector<int> t, int mask) {
  int sum = 0;
  int i = 0;
  while (mask) {
    if (mask & 1) {
      sum += t[i];
    }
    i++;
    mask >>= 1;
  }
  return sum;
}
int main(void) {
  int N, n_tracks;
  while (scanf("%d%d", &N, &n_tracks) == 2) {
    vector<int> tracks(n_tracks, 0);
    int max_sum = 0;
    int max_mask = 0;
    for (int i = 0; i < n_tracks; i++) {
      scanf("%d", &tracks[i]);
    }
    for (int mask = 0, limit = 1 << n_tracks; mask < limit; mask++) {
      int temp = sum_mask(tracks, mask);
      if (temp > max_sum && temp <= N) {
        max_sum = temp;
        max_mask = mask;
      }
    }
    int p = 0;
    while (max_mask) {
      if (max_mask & 1) {
        printf("%d ", tracks[p]);
      }
      p++;
      max_mask >>= 1;
    }
    printf("sum:%d\n", max_sum);
  }
}