#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int k = 0, l = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d ", l);
            l++;
        } else {
            printf("%d ", n - k);
            k++;
        }
    }
    printf("\n");
}