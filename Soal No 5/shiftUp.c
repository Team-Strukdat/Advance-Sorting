#include "header.h"

void siftUp(int heap[], int n)
{
    // sifts up the value in heap[n] so that heap[1..n] contains a heap
    int siftItem = heap[n]; // siftItem is the value to be sifted up
    int child = n;          // child is the index of the child to be sifted up
    int parent = child / 2; // parent is the index of the parent of the child
    while (parent > 0)
    { // while the child is not the root
        if (siftItem <= heap[parent])
            break;                  // siftItem is in the correct position
        heap[child] = heap[parent]; // move down parent
        child = parent;             // move up child
        parent = child / 2;         // move up parent
    }
    heap[child] = siftItem;
} // end siftUp