#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool sortfn(pair<int, int> p1, pair<int, int> p2) {
    return (p1.first < p2.first);
}

int main(void) {
    int n, t1, t2;
    scanf("%d", &n);
    vector<pair<int, int>> laptops(n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &t1, &t2);
        laptops[i] = make_pair(t1, t2);
    }
    sort(laptops.begin(), laptops.end(), sortfn);
    for (int i = 0; i < n - 1; i++) {
        if (laptops[i].second > laptops[i + 1].second) {
            printf("Happy Alex\n");
            return 0;
        }
    }
    printf("Poor Alex\n");
    return 0;
}
