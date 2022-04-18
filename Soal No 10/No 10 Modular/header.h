/*
Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/*
Deskripsi :
Insertion Sortmenggunakan pencarian biner untuk menentukan posisi di mana A[j] 
akan disisipkan di antara sublist yang diurutkan A[1..j-1]
Penyelesaian :

*/
#include <stdio.h>

int binarySearch(int a[], int item, int low, int high);
void insertionSort(int a[], int n);
void scanNumber(int *arr, int *n);