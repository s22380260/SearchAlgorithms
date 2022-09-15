#include <stdio.h>
#include "SearchAlgorithms.h"

int main()
{
    int target = 4;
    int a[] = { 1, 13, 4, 7, 9, 15, 17, 19 };

    int len = sizeof(a) / sizeof(a[0]);

    printf("line_search: %d\n", line_search(a, target, len));
    printf("search_with_barrier: %d\n", search_with_barrier(a, target, len));
    printf("binary_search: %d\n", binary_search(a, target, len));

    return 0;
}