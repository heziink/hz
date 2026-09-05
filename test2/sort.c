#include <stdio.h>
#include "sort.h"

int main(void)
{
    int a[] = {5, 2, 9, 1, 3};
    int b[] = {5, 2, 9, 1, 3};
    size_t n = sizeof(a) / sizeof(a[0]);
    size_t i;

    insertion_sort(a, n);
    selection_sort(b, n);

    printf("插入排序结果：");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n选择排序结果：");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}
