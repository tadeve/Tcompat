#include <cstdio>
#include <vector>
#include <string.h>
#include <stack>
#include <iostream>
using namespace std;

int main() {
    vector<string> solutions;
    int n_cases;
    scanf("%d", &n_cases);
    for (int cs = 0; cs <= n_cases; cs++) {
        string line;
        getline(cin, line);
        if (cs != 0) {
            if (line.length() % 2 != 0) {
                solutions.push_back("No");
            } else if (line == "") {
                solutions.push_back("Yes");
            } else {
                int len = line.length();
                stack<char> q;
                for (int p = 0; p < len; p++) {
                    if (q.empty()) {
                        q.push(line[p]);
                    } else if (q.top() == '(' && line[p] == ')') {
                        q.pop();
                    } else if (q.top() == '[' && line[p] == ']') {
                        q.pop();
                    } else {
                        q.push(line[p]);
                    }
                }
                if (q.empty()) {
                    solutions.push_back("Yes");
                } else {
                    solutions.push_back("No");
                }
            }
        }
    }

    for (int i = 0; i < solutions.size(); i++) {
        cout << solutions[i] << endl;
    }
}
