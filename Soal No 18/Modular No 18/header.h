/*
    Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/*
Deskripsi :
Setiap nilai dalam A[1..n] adalah 1, 2, atau 3. Anda diminta untuk menemukan angka minimal
pertukaran untuk mengurutkan array. 
Misalnya, array berikut dapat diurutkan dengan empat pertukaran, 
dalam urutan ini: (1, 3) (4, 7) (2, 9) (5, 9):

*/

#include <stdio.h>

void swap(int *a, int *b);
int partition(int array[], int low, int high, int *jumlahSwap);
void quickSort(int array[], int low, int high, int *jumlahSwap);
void printArray(int array[], int size);
