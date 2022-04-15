#include "header.h"

void printHeap(int heap[], int n)
{
    // prints the heap
    int i;
    printf("Print Heap: ");
    for (i = 1; i <= n; i++)
        printf("%d ", heap[i]);
    printf("\n");
} // end printHeap