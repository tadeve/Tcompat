#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void zero(int f[], int n) {
    for (int i = 0; i < n; i++)
        f[i] = 0;
}

int main(void) {
    string name1, name2, pile;
    getline(cin, name1);
    getline(cin, name2);
    getline(cin, pile);
    int freq1[26], freq2[26];
    zero(freq1, 26);
    zero(freq2, 26);
    for (int i = 0; i < name1.length(); i++)
        freq1[name1[i] - 'A']++;
    for (int i = 0; i < name2.length(); i++)
        freq1[name2[i] - 'A']++;
    for (int i = 0; i < pile.length(); i++)
        freq2[pile[i] - 'A']++;
    for (int i = 0; i < 26; i++) {
        if (freq2[i] != freq1[i]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
