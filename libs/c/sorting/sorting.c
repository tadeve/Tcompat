#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int array[], int length) {
    for (int j = 1; j < length; j++) {
        int i = j - 1;
        int key = array[j];
        while (i >= 0 && array[i] > key) {
            array[i + 1] = array[i];
            i = i - 1;
        }
        array[i + 1] = key;
    }
}
void merge(int array[], int idx1, int idx2, int idx3) {
    int n1 = idx2 - idx1 + 1, n2 = idx3 - idx2;
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));
    for (int i = 0; i < n1; i++) {
        L[i] = array[idx1 + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = array[idx2 + 1 + i];
    }
    int i = 0, j = 0, k = idx1;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
            k++;
        } else {
            array[k] = R[j];
            j++;
            k++;
        }
    }
    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
    free(L);
    free(R);
}
void merge_sort(int array[], int idx1, int idx2) {
    if (idx1 < idx2) {
        int q = floor((idx1 + idx2) / 2);
        merge_sort(array, idx1, q);
        merge_sort(array, q + 1, idx2);
        merge(array, idx1, q, idx2);
    }
}