#include "sorting/sorting.c"
#include "helper_functions.c"
#include <stdbool.h>
#include <stdio.h>

void test_insertion_sort() {
    int test_status;
    FILE *unsorted_data = fopen("./sorting/unsorted_data", "r");
    FILE *sorted_data = fopen("./sorting/sorted_data", "r");
    int unsorted[1000], sorted[1000], diff[1000];
    for (int i = 0; i < 1000; i++) {
        fscanf(unsorted_data, "%d", &unsorted[i]);
        fscanf(sorted_data, "%d", &sorted[i]);
    }
    insertion_sort(unsorted, 1000);
    test_status = compare_array(unsorted, sorted, diff, 1000);
    if (test_status != 1) {
        show_diff(sorted, unsorted, diff, 1000);
    } else {
        printf(
            "Insertion Sort Test Passed, and files closed with status %d %d\n",
            fclose(unsorted_data), fclose(sorted_data));
    }
}
bool test_merg() {
    int array[] = {1, 3, 5, 7, 9,  11, 13, 15, 17, 19,
                   2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    merge(array, 0, 9, 19);
    for (int i = 1; i <= 20; i++) {
        if (array[i - 1] != i) {
            return false;
        }
    }
    return true;
}
void test_merge_sort() {
    int test_status;
    FILE *unsorted_data = fopen("./sorting/unsorted_data", "r");
    FILE *sorted_data = fopen("./sorting/sorted_data", "r");
    int unsorted[1000], sorted[1000], diff[1000];
    for (int i = 0; i < 1000; i++) {
        fscanf(unsorted_data, "%d", &unsorted[i]);
        fscanf(sorted_data, "%d", &sorted[i]);
    }
    merge_sort(unsorted, 0, 1000);
    test_status = compare_array(unsorted, sorted, diff, 1000);
    if (test_status != 1) {
        show_diff(sorted, unsorted, diff, 1000);
    } else {
        printf("Merge Sort Test Passed, and files closed with status %d %d\n",
               fclose(unsorted_data), fclose(sorted_data));
    }
}