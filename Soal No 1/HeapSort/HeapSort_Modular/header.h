/*
Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/*
Deskripsi :
Mengitung waktu menggunakan heap sort
*/

// Heap Sort in C

#include <stdio.h>
#include <time.h>

extern long long int stability;

void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void printArray(int arr[], int n, int sat);
void scaningNumber(FILE *fptr, int *arr, int *n);
