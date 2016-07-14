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
    vector<string> sol;
    int n;
    queue<int> que;
    stack<int> stk;
    priority_queue<int> pque;
    while (scanf("%d", &n) == 1) {
        vector<int> det1, det2, det3, dp1, dp;
        int n1, n2, h1, h2, h3;
        for (int i = 0; i < n; i++) {
            scanf("%d%d", &n1, &n2);
            if (n1 == 1) {
                que.push(n2);
                stk.push(n2);
                pque.push(n2);
                dp1.push_back(n2);
            } else {
                dp.push_back(n2);
                if (!que.empty()) {
                    h1 = que.front();
                    det1.push_back(h1);
                    que.pop();
                }
                if (!stk.empty()) {
                    h2 = stk.top();
                    det2.push_back(h2);
                    stk.pop();
                }
                if (!pque.empty()) {
                    h3 = pque.top();
                    det3.push_back(h3);
                    pque.pop();
                }
            }
        }

        bool isq = false, isstk = false, ispq = false;
        if (det1 == dp)
            isq = true;
        if (det2 == dp)
            isstk = true;
        if (det3 == dp)
            ispq = true;
        if ((isq && (isstk || ispq)) || (isstk && (isq || ispq)) ||
            (ispq && (isstk || isq)))
            sol.push_back("not sure");
        else if (isq)
            sol.push_back("queue");
        else if (isstk)
            sol.push_back("stack");
        else if (ispq)
            sol.push_back("priority queue");
        else
            sol.push_back("impossible");
        det1.clear();
        det2.clear();
        det3.clear();
        dp1.clear();
        dp.clear();
        while (!que.empty()) {
            que.pop();
        }
        while (!stk.empty()) {
            stk.pop();
        }
        while (!pque.empty()) {
            pque.pop();
        }
    }

    for (int i = 0; i < sol.size(); i++)
        cout << sol[i] << endl;

    system("pause");
    return 0;
}
