#include "sort.h"

void selection_sort(int arr[], size_t n)
{
    size_t i;

    for (i = 0; i < n; i++) {
        size_t min_index = i;
        size_t j;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}
