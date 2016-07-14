#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int max(vector<int> v) {
    int max = v[0];
    for (int i = 0; i < v.size(); i++) {
        if (max < v[i]) {
            max = v[i];
        }
    }
    return max;
}

int main(void) {
    int n, temp, n_towers = 0;
    scanf("%d", &n);
    vector<int> towers(1001, 0);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (towers[temp] == 0) {
            n_towers++;
        }
        towers[temp]++;
    }
    printf("%d %d\n", max(towers), n_towers);
    return 0;
}
