#include <cstdio>
#include <vector>
#include <string.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
vector<string> solutions;
int n_cases;
int main() {
    scanf("%d", &n_cases);
    for (int i = 0; i < n_cases; i++) {
        int grid[1025][1025] = {0};
        int d, n_points;
        scanf("%d", &d);
        scanf("%d", &n_points);
        int xx[n_points], yy[n_points], vv[n_points];
        int mx_x = 0, mx_y = 0, mn_x = 1025, mn_y = 1025;
        for (int j = 0; j < n_points; j++) {
            scanf("%d %d %d", &xx[j], &yy[j], &vv[j]);
            int mx_x = ((xx[j] + d) < 1025 ? (xx[j] + d) : 1024),
                mn_x = ((xx[j] - d) > 0 ? (xx[j] - d) : 0);
            int mx_y = ((yy[j] + d) < 1025 ? (yy[j] + d) : 1024),
                mn_y = ((yy[j] - d) > 0 ? (yy[j] - d) : 0);
            for (int ys = mn_y; ys <= mx_y; ys++) {
                for (int xs = mn_x; xs <= mx_x; xs++) {
                    grid[ys][xs] += vv[j];
                }
            }
        }
        int max_kill[3];
        max_kill[2] = 0;
        for (int y = 0; y < 1025; y++) {
            for (int x = 0; x < 1025; x++) {
                if (grid[y][x] > max_kill[2]) {

                    max_kill[2] = grid[y][x];
                    max_kill[0] = x;
                    max_kill[1] = y;
                } else if (grid[y][x] == max_kill[2]) {
                    if (x < max_kill[0]) {
                        max_kill[0] = x;
                        max_kill[1] = y;
                    } else if (x == max_kill[0]) {
                        if (y < max_kill[1]) {
                            max_kill[0] = x;
                            max_kill[1] = y;
                        }
                    }
                }
            }
        }
        char temp[100];
        sprintf(temp, "%d %d %d", max_kill[0], max_kill[1], max_kill[2]);
        solutions.push_back(temp);
    }
    for (int sol = 0; sol < n_cases; sol++) {
        cout << solutions[sol] << endl;
    }

    return 0;
}
