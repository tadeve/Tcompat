#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(void) {
    int n, k, l, r, sall, sk;
    cin >> n >> k >> l >> r >> sall >> sk;
    int kscores = sk / k;
    vector<int> dist(n);
    for (int i = 0; i < k; i++) {
        dist[i] = kscores;
    }
    if (kscores * k != sk) {
        int ss = sk - (kscores * k);
        for (int i = 0; i < ss; i++) {
            dist[i % k]++;
        }
    }
    int rest_of_score = sall - sk;
    if (n - k) {
        int ros_r = rest_of_score / (n - k);
        for (int i = k; i < n; i++) {
            dist[i] = ros_r;
        }
        if (ros_r * (n - k) != rest_of_score) {
            int ss = rest_of_score - (ros_r * (n - k));
            for (int i = 0; i < ss; i++) {
                dist[k + (i % (n - k))]++;
            }
        }
    }
    for (auto i : dist)
        printf("%d ", i);
    printf("\n");
}