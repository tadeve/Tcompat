#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int decimal_point_idx(string s) {
    int i;
    for (i = 0; s[i] != '.' && i < s.length(); i++)
        ;
    return i;
}

int main(void) {

    string s;
    getline(cin, s);
    int dec_pnt_idx = decimal_point_idx(s);
    if (s[dec_pnt_idx - 1] == '9') {
        printf("GOTO Vasilisa.");
    } else {
        if (s[dec_pnt_idx + 1] < '5') {
            string temp = s.substr(0, dec_pnt_idx);
            cout << temp;
        } else {
            s[dec_pnt_idx - 1] += 1;
            string temp = s.substr(0, dec_pnt_idx);
            cout << temp;
        }
    }
    cout << "\n";
}