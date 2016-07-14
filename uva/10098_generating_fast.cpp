#include <stdio.h>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <string.h>
#include <string>
#include <ctype.h>
#include <iostream>
#include <iterator>
#include <vector>
#include <stdlib.h>
#include <sstream>

using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    string s;
    for (int i = 0; i < n + 1; i++) {
        getline(cin, s);
        if (i != 0) {
            sort(s.begin(), s.end());
            do {
                cout << s << endl;
            } while (next_permutation(s.begin(), s.end()));
            cout << endl;
        }
    }
    system("pause");
    return 0;
}
