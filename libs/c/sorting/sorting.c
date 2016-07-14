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
void merg(int array[], int idx1, int idx2, int idx3) {}