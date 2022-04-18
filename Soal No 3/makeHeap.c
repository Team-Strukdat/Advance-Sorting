
// Fungsi makeHeap in C

#include "header.h"

void makeHeap(int heap[], int n)
{
    // sifts up the value in heap[n] so that heap[1..n] contains a heap
    int siftItem = heap[n]; // siftItem = elemen array
    int child = n;          // child = elemen array
    int parent = child / 2; // parent = elemen array
    while (parent > 0)
    { // jika parent > 0
        if (siftItem <= heap[parent])
            break;
        heap[child] = heap[parent]; // move down parent
        child = parent;
        parent = child / 2;
    }
    heap[child] = siftItem;
} // end makeHeap