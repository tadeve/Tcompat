#include <cstdio>
using namespace std;

int main(void) {
    int n;
    scanf("%d\n", &n);
    if (n < 3) {
        printf("-1");
    } else {
        for (int i = n; i > 0; i--) {
            printf("%d ", i);
        }
    }
    return 0;
}
