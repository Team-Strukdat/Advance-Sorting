/*
    Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/* Deskripsi
    File header.h ini berisi tipe data, fungsi yang diperlukan untuk masalah nomor 17.
    Juga, mendefinisikan Word, DupArray sebagai struktur antarmuka dan mendeklarasikan prototipe createDupArray, compChar, compStr,
    printAnagramsTogether.
*/

// Penyelesaian:

#include <stdio.h> // standard library
#include <stdlib.h> // standard library
#include <string.h> // standard library

// Prototype functions

void minHeapify(int[], int, int);
void buildMinHeap(int[], int);
void mergeHeaps(int[], int[], int[], int, int);
