/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1644"
*/
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    unsigned int H, W, N;
    scanf("%d%d%d", &H, &W, &N);
    while (H != 0 && W != 0) {
        vector<vector<int>> grid(H, vector<int>(W, 0));
        int x1, y1, x2, y2;
        for (int i = 0; i < N; i++) {
            scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
            int x = ((x1 > x2) ? x1 : x2) - 1;
            int y = ((y1 > y2) ? y1 : y2) - 1;
            int x0 = ((x1 < x2) ? x1 : x2) - 1;
            int y0 = ((y1 < y2) ? y1 : y2) - 1;
            for (int j = x0; j <= x; j++) {
                for (int k = y0; k <= y; k++) {
                    grid[j][k] = 1;
                }
            }
        }
        int counter = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (grid[i][j] == 0) {
                    counter++;
                }
            }
        }
        if (counter == 0) {
            printf("There is no empty spots.\n");
        } else if (counter == 1) {
            printf("There is one empty spot.\n");

        } else {
            printf("There are %d empty spots.\n", counter);
        }

        scanf("%d%d%d", &H, &W, &N);
    }
    return 0;
}
