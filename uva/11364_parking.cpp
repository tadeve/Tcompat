#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <sstream>
using namespace std;
int main() {
    freopen("in.txt", "r", stdin);
    vector<int> solutions;
    int n_cases;
    scanf("%d", &n_cases);
    while (--n_cases) {
        int n_stores, temp;
        scanf("%d", &n_stores);
        string line;
        getline(cin, line);

        {
            vector<int> stores;
            stringstream ss(line);
            for (int st = 0; st < n_stores; st++) {
                ss >> temp;
                stores.push_back(temp);
            }
            sort(stores.begin(), stores.end());
            int sum = 0;
            for (int po = stores.size() - 1; po > 0; po++) {
                sum += (stores[po] - stores[po - 1]);
            }
            solutions.push_back(sum);
        }
        else {
            solutions.push_back(0);
        }
    }

    for (int sol = 0; sol < solutions.size(); sol++) {
        printf("%d\n", solutions[sol]);
    }
    return 0;
}
