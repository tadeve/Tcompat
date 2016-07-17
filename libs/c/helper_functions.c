#include <stdio.h>
void print_array(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void zero(int array[], int length) {
    for (int i = 0; i < length; i++) {
        array[i] = 0;
    }
}
int compare_array(int array1[], int array2[], int diff[], int length) {
    int test_status = 1;
    zero(diff, length);
    for (int i = 0; i < length; i++) {
        if (array1[i] != array2[i]) {
            test_status = 0;
            diff[i] = 1;
        }
    }
    return test_status;
}

void show_diff(int array1[], int array2[], int diff[], int length) {
    for (int i = 0; i < length; i++) {
        if (diff[i]) {
            printf("on index %d : %d is not %d\n", i, array1[i], array2[i]);
        }
    }
}