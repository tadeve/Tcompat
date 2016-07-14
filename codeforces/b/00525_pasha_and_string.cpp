#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printv(vector<bool> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(void) {
    string s;
    getline(cin, s);
    vector<bool> mask((int)(s.length() / 2), false);
    int n, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        mask[temp - 1] = !mask[temp - 1];
    }
    bool rev = false;
    for (int i = 0; i < mask.size(); i++) {
        if (mask[i]) {
            rev = !rev;
        }
        if (rev) {
            char temp = s[i];
            s[i] = s[s.length() - i - 1];
            s[s.length() - i - 1] = temp;
        }
    }
    cout << s << endl;
}