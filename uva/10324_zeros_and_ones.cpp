#include <cstdio>
#include <vector>
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    vector<string> solutions;
    char line[1000015];
    int n_cases, counter = 1;
    while (scanf("%s", line) == 1) {
        if (strcmp(line, "n") == 0)
            break;
        scanf("%d", &n_cases);
        char cs[26];
        sprintf(cs, "Case %d:", counter);
        solutions.push_back(cs);
        for (int i = 0; i < n_cases; i++) {
            int k, j, temp1, temp2;
            scanf("%d%d", &temp1, &temp2);
            j = max(temp1, temp2);
            k = min(temp1, temp2);
            bool same = true;
            if (j != k) {
                char comm = line[k];
                for (int mm = k; mm < j + 1; mm++) {
                    if (line[mm] != comm) {
                        same = false;
                        break;
                    }
                }
            }
            if (same == false) {
                solutions.push_back("No");
            } else {
                solutions.push_back("Yes");
            }
        }
        counter++;
    }
    int sz = solutions.size();
    for (int cc = 0; cc < sz; cc++) {
        cout << solutions[cc] << endl;
    }

    return 0;
}
