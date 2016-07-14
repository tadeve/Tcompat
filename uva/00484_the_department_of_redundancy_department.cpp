#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>


using namespace std;
int main() {
    map<int, int> mp;
    queue<int> q;
    int n;
    while (scanf("%d", &n) == 1) {
        if (mp[n] == 0)
            q.push(n);
        ++mp[n];
    }
    while (!q.empty()) {
        printf("%d %d\n", q.front(), mp[q.front()]);
        q.pop();
    }

    system("pause");
    return 0;
}
