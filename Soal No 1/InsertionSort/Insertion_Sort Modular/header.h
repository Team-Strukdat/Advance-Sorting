/*
Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/*
Deskripsi :
Mengitung waktu menggunakan insertion sort.
*/

// Insertion Sort in C

#include <math.h>
#include <stdio.h>
#include <time.h>

extern long long int comparation;

void insertionSort(int arr[], int n);
void createArray(int arr[], int n, int sat);
void scaningNumber(int *arr, FILE *fptr, int *n);
