/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovani
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Mengitung waktu menggunakan insertion sort.
*/


// Insertion Sort in C

#include <math.h>
#include <stdio.h>
#include <time.h>

extern long long int comparation ;

void insertionSort(int arr[], int n);
void createArray(int arr[], int n, int sat);
void scaningNumber(int *arr, FILE *fptr, int *n);
