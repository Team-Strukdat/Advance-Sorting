/*
    Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/* Deskripsi
    Fungsi makeHeap dilewatkan array integer A.
    jika A[0] berisi n, maka A[1] ke A[n] berisi angka dalam urutan arbitrer.
    Tulis makeHeap sedemikian rupa sehingga A[1] hingga A[n] berisi max-heap (nilai terbesar di root).
    Fungsi Anda harus membuat heap dengan memproses elemen dalam urutan A[2], A[3], …, A[n].
*/

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