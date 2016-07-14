#include <cstdio>
#include <vector>
#include <string.h>
#include <queue>
#include <iostream>
using namespace std;

int main() {
    vector<string> solutions;
    int n;
    scanf("%d", &n);
    while (n != 0) {
        vector<int> thr;
        int remain;
        if (n < 2) {
            char ss1[50], ss2[50];
            sprintf(ss1, "Discarded cards:");
            sprintf(ss2, "Remaining card: 1");
            solutions.push_back(ss1);
            solutions.push_back(ss2);

        } else {
            queue<int> q;
            for (int i = 1; i <= n; i++) {
                q.push(i);
            }
            int u;
            while (q.size() >= 2) {
                u = q.front();
                thr.push_back(u);
                q.pop();
                u = q.front();
                q.pop();
                q.push(u);
            }
            remain = q.front();
            int lim = thr.size();
            char ss1[10000] = "Discarded cards: ", ss2[200], card[5];
            sprintf(ss2, "Remaining card: %d", remain);
            for (int mm = 0; mm < lim - 1; mm++) {
                sprintf(card, "%d, ", thr[mm]);
                strcat(ss1, card);
            }
            sprintf(card, "%d", thr[lim - 1]);
            strcat(ss1, card);
            solutions.push_back(ss1);
            solutions.push_back(ss2);
        }
        scanf("%d", &n);
    }
    int ll = solutions.size();
    for (int sol = 0; sol < ll; sol++) {
        cout << solutions[sol] << endl;
    }
}
