#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool all(vector<bool> l) {
    bool res = true;
    for (int i = 0; i < l.size(); i++)
        res = res && l[i];
    return res;
}

int main(void) {
    int n, p, q, temp;
    scanf("%d\n", &n);
    vector<bool> levels(n, false);
    scanf("%d\n", &p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &temp);
        levels[temp - 1] = true;
    }
    scanf("%d\n", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &temp);
        levels[temp - 1] = true;
    }
    if (all(levels)) {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }
    return 0;
}
