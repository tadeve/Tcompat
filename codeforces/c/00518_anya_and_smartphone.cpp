#include <algorithm>
#include <inttypes.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;
void printa(int a[], int n, int begin = 0) {
    printf("array : ");
    if (begin > 0)
        n++;
    for (int i = begin; i < n; i++)
        printf("%llu ", a[i]);
    printf("\n");
}
int main() {
    unsigned long long n, m, k;
    unsigned long long ans = 0;
    scanf("%llu%llu%llu", &n, &m, &k);
    unsigned long long apps[100000];
    unsigned long long pos[100000];
    for (int i = 1; i <= n; i++) {
        scanf("%llu", &apps[i]);
        pos[apps[i]] = (i);
    }
    for (int i = 0; i < m; i++) {
        unsigned long long mm;
        scanf("%llu", &mm);
        ans += ceil(double(pos[mm]) / k);
        if (pos[mm] != 1) {
            unsigned long long temp = pos[mm];
            swap(apps[temp], apps[temp - 1]);
            pos[apps[temp]]++;
            pos[apps[temp - 1]]--;
        }
    }
    printf("%llu\n", ans);
    return 0;
}