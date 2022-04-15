/*
    Nama Kelompok :
    1. Robby Ulung Pambudi
    2. M. Armand Giovani
    3. Fathin Muhashibi Putra
*/

/*
Write code to read a set of positive integers (terminated by 0) and create a heap in an array H
with the smallest value at the top of the heap. as each integer is read, it is inserted among the
existing items such that the heap properties are maintained. at any time, if n numbers have been
read, then H[1..n] must contain a heap. assume that H is large enough to hold all the integers.
given the data 51 26 32 45 38 89 29 58 34 23 0, show the contents of H after each
number has been read and processed.
*/

#include <stdio.h>
void siftUp(int heap[], int n);    // sifts up the value in heap[n] so that heap[1..n] contains a heap
void printHeap(int heap[], int n); // prints the heap
