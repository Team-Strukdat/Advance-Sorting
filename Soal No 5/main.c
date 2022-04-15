#include "header.h"
#include <stdio.h>

int main()
{
    int heap[1000];

    int n = 0, temp;
    while (printf("Masukan Anggka : "), scanf("%d", &temp), temp != 0)
    { // Input angka

        heap[++n] = temp;   // Masukan angka ke array
        siftUp(heap, n);    // Sift up angka
        printHeap(heap, n); // Print heap
    }
    printHeap(heap, n); // Print heap
    return 0;
}