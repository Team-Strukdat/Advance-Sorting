#include "header.h"
#include <stdio.h>

// FUNGSI UNTUK MENGHAPUS HEAP
void deleteHeap(int heap[], int n, int number)
{
    int i, x = 0; // i = index, x = elemen array
    for (i = 1; i <= n; i++)
    { // jika elemen array = number
        if (heap[i] == number)
        {
            x = i; // set x = i
            break;
        }
    }
    if (x == 0)
    {
        printf("\nElemen yang ingin dihapus tidak ada\n");
    }
    else
    {
        heap[x] = heap[n];     // set elemen array = elemen array terakhir
        heap[n] = 0;           // set elemen array terakhir = 0
        makeHeap(heap, n - 1); // memanggil fungsi makeHeap
    }
}
