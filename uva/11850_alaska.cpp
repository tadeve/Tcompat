#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    scanf("%d\n", &n);
    while (n != 0) {
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            scanf("%d\n", &stations[i]);
        }
        sort(stations.begin(), stations.end());
        for (int i = 0; i < n - 1; i++) {
            if (stations[i + 1] - stations[i] > 200) {
                printf("IMPOSSIBLE\n");
                goto next;
            }
        }
        if (2 * (1422 - stations[n - 1]) > 200) {
            printf("IMPOSSIBLE\n");
            goto next;
        }
        printf("POSSIBLE\n");
    next:
        scanf("%d\n", &n);
    }
    return 0;
}
