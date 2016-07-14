#include <cstdio>
#include <set>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <iostream>
#include <iterator>
using namespace std;

int main() {
    set<string> s;
    string temp1, temp2;
    while (cin >> temp1) {
        temp2 = "";
        for (int l = 0; l <= temp1.length(); l++) {
            if (isalpha(temp1[l])) {
                temp2 += tolower(temp1[l]);
            } else if (temp2 != "") {
                s.insert(temp2);
                temp2 = "";
            }
        }
    }
    for (set<string>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << endl;

    return 0;
}
