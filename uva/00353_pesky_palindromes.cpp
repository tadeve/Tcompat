#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <iterator>
#include <set>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>

using namespace std;
bool is_pali(string s) {
    if (s == string(s.rbegin(), s.rend()))
        return true;
    else
        return false;
}
int main() {
    int n;
    string word;
    while (getline(cin, word)) {
        int size = word.length();
        set<char> q;
        set<string> qq;
        for (int ii = 0; ii < size; ii++)
            q.insert(word[ii]);
        int palis = q.size();
        q.clear();
        for (int i = 0; i < size - 1; i++) {
            for (int j = 2; j <= (size - i); j++) {
                string temp = word.substr(i, j);
                if (is_pali(temp) == true) {
                    qq.insert(temp);
                }
            }
        }
        palis += qq.size();
        cout << "The string '" << word << "' contains " << palis
             << " palindromes." << endl;
    }

    return 0;
}
