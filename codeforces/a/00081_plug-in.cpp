#include <stdio.h>
#include <stack>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string ss;
    cin >> ss;
    stack<char> q;
    for (int i = 0; i < ss.length(); i++) {
        if (q.empty() || q.top() != ss[i]) {
            q.push(ss[i]);
        } else {
            q.pop();
        }
    }
    string res = "";
    stack<char> ll;
    while (!q.empty()) {
        res += q.top();
        q.pop();
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}