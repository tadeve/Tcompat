#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
    int l;
    scanf("%d", &l);
    getchar();
    while (l != 0) {
        string s;
        int min_dist = l;
        char last = '.';
        int last_idx = 0;
        getline(cin, s);
        for (int i = 0; i < l; i++) {
            if (s[i] == 'R') {
                if (last == 'D') {
                    min_dist =
                        min_dist > (i - last_idx) ? (i - last_idx) : min_dist;
                    last_idx = i;
                    last = 'R';
                } else {
                    last_idx = i;
                    last = 'R';
                }

            } else if (s[i] == 'D') {
                if (last == 'R') {
                    min_dist =
                        min_dist > (i - last_idx) ? (i - last_idx) : min_dist;
                    last_idx = i;
                    last = 'D';
                } else {
                    last_idx = i;
                    last = 'D';
                }

            } else if (s[i] == 'Z') {
                printf("0\n");
                goto next;
            }
        }
        printf("%d\n", min_dist);
    next:
        scanf("%d", &l);
        getchar();
    }
}