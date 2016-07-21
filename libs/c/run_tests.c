#include "sorting_tests.c"
#include <stdio.h>
int main(void) {
    test_insertion_sort();
    if (test_merg()) {
        test_merge_sort();
    } else {
        printf("merge failed\n");
    }
}
