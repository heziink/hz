#include "sort.h"

void insertion_sort(int arr[], size_t n)
{
    size_t i;

    for (i = 1; i < n; i++) {
        int key = arr[i];
        size_t j = i;

        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = key;
    }
}
