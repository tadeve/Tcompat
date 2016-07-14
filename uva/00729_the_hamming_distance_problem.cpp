#include <cstdio>
#include <string>
using namespace std;
void print_bin(int n, int bits) {
  string rep = "";
  for (int i = 0; i < bits; i++) {
    if (n & 1)
      rep += '1';
    else
      rep += '0';

    n >>= 1;
  }
  for (int i = 0, len = rep.length(); i < len / 2; i++) {
    char temp = rep[i];
    rep[i] = rep[len - i - 1];
    rep[len - i - 1] = temp;
  }
  printf("%s", rep.c_str());
}
int ones(int n) {
  int counter = 0;
  while (n) {
    if (n & 1) counter++;
    n >>= 1;
  }
  return counter;
}

int main(void) {
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++) {
    int N, H;
    scanf("%d%d", &N, &H);
    for (int mask = 0, bits = 1 << N; mask < bits; mask++) {
      if (ones(mask) == H) {
        print_bin(mask, N);
        printf("\n");
      }
    }
    if (i != T - 1) printf("\n");
  }
}