#include <algorithm>
#include <ctime>
#include <ctype.h>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>

using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    vector<long long> win, sol;
    multiset<long long> s1, s2;
    for (int cas = 0; cas < tc; cas++) {
        int n, m;
        long long temp;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++) {
            scanf("%lld", &temp);
            s1.insert(temp);
        }
        for (int j = 0; j < m; j++) {
            scanf("%lld", &temp);
            s2.insert(temp);
        }
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                         back_inserter(win));
        long long out;
        out = (s1.size() - win.size()) + (s2.size() - win.size());
        sol.push_back(out);
        s1.clear();
        s2.clear();
        win.clear();
    }

    for (int i = 0; i < sol.size(); i++) {
        printf("%lld\n", sol[i]);
    }
    system("pause");
    return 0;
}
