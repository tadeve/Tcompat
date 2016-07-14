#include <cstdio>
#include <iostream>
#include <string>
#define is_lower(x) (x >= 'a' && x <= 'z')
#define is_upper(x) (x >= 'A' && x <= 'Z')
#define to_lower(x) (x - 'A' + 'a')
#define ord(x) (x - 'a')
using namespace std;
void zero(int f[], int n) {
    for (int i = 0; i < n; i++)
        f[i] = 0;
}
int max_arr(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}
int main(void) {
    int T;
    scanf("%d", &T);
    getchar();
    for (int test = 0; test < T; test++) {
        int freq[26];
        zero(freq, 26);
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (is_upper(s[i])) {
                freq[to_lower(ord(s[i]))]++;
            } else if (is_lower(s[i])) {
                freq[ord(s[i])]++;
            }
        }
        int m = max_arr(freq, 26);
        for (int i = 0; i < 26; i++) {
            if (freq[i] == m) {
                printf("%c", i + 'a');
            }
        }
        printf("\n");
    }
    return 0;
}
