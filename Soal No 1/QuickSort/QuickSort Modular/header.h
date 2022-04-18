/*
Nama Kelompok :
Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/*
Deskripsi :
Mengitung waktu menggunakan quick sort
*/

// Quick Sort in C

#include <stdio.h>
#include <time.h>

extern long long int comparation;

void swap(int *a, int *b);
int partition(int array[], int low, int high);
void quickSort(int array[], int low, int high);
void createArray(int arr[], int n, int sat);
void scaningNumber(int *arr, FILE *fptr, int *n);
