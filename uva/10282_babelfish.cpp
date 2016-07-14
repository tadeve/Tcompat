#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>

using namespace std;
int main() {
    vector<string> sol;
    map<string, string> mp;
    string s1, s2, line;
    stringstream ss;
    while (getline(cin, line) && !line.empty()) {
        stringstream ss(line);
        ss >> s1 >> s2;
        mp[s2] = s1;
    }
    char f[80];
    while (scanf("%s", f) == 1) {
        if (mp[f] != "") {
            sol.push_back(mp[f]);
        } else {
            sol.push_back("eh");
        }
    }

    for (int jj = 0; jj < sol.size(); jj++)
        cout << sol[jj] << endl;
    return 0;
}
