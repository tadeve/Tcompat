#include "sorting.c"
#include "helper_functions.c"
#include <stdio.h>
void test_insertion_sort() {
  int test_status;
  FILE *unsorted_data = fopen("./data/unsorted_data", "r");
  FILE *sorted_data = fopen("./data/sorted_data", "r");
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
    printf("Insertion Sort Test Passed, and files closed with status %d %d\n",
           fclose(unsorted_data), fclose(sorted_data));
  }
}