#include <algorithm>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>


using namespace std;

void to_zero(vector<string>& grid, int indx) {
    for (int i = 0, ssize = grid.size(); i < ssize; i++) {
        grid[i][indx] = '0';
    }
}

void first_char(vector<string>& grid, int n, int& m, int& counter) {
    int l = m;
    for (int letter = 0; letter < l; letter++) {
        for (int i = 0; i < n - 1; i++) {
            if (grid[i][0] > grid[i + 1][0]) {
                to_zero(grid, counter);
                counter++;
            }
        }
    }
}

void read_matrix(vector<string>& grid, int n) {
    string temp;
    for (int i = 0; i < n; i++) {
        getline(cin, temp);
        grid[i] = temp;
    }
}

void s_solve(vector<string>& grid, int n, int m, int& counter) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n - 1; j++) {
            string s1 = (grid[j]).substr(0, i + 1).c_str();
            string s2 = (grid[j + 1]).substr(0, i + 1).c_str();
            if (s1 > s2) {
                to_zero(grid, i);
                counter++;
            }
        }
    }
}

int main(void) {
    int n, m, counter = 0;
    scanf("%i%i\n", &n, &m);
    if (n == 1) {
        printf("0\n");
        return 0;
    }
    vector<string> grid(n);
    read_matrix(grid, n);
    first_char(grid, n, m, counter);
    s_solve(grid, n, m, counter);
    printf("%d\n", counter);
    return 0;
}