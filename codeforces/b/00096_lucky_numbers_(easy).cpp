#include <iostream>
#include <queue>
#include <stdio.h>
#include <vector>

using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    queue<pair<long long, int>> q;
    long long sol;
    pair<long long, int> u;
    q.push(make_pair(4, 1));
    q.push(make_pair(7, -1));

    while (!q.empty()) {
        u = q.front();
        q.pop();
        if (u.first >= n && u.second == 0) {
            cout << u.first << endl;
            break;
        }
        q.push(make_pair(u.first * 10 + 4, u.second + 1));
        q.push(make_pair(u.first * 10 + 7, u.second - 1));
    }
}