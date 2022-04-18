#include <stdio.h>
#include <stdlib.h>

#include "header.h"
int main()
{

    int n = 0, number; // n = jumlah elemen array dan number = elemen array
    printf("Masukkan jumlah elemen array : ");
    scanf("%d", &n); // input jumlah elemen array
    int arr[n];      // membuat array
    for (int i = 1; i <= n; i++)
    {                                          // input elemen array
        printf("Masukkan elemen ke-%d : ", i); // input elemen array
        scanf("%d", &number);                  // input elemen array
        arr[i] = number;                       // set arr[i] = number
        makeHeap(arr, i);                      // memanggil fungsi makeHeap
    }

    printf("\n");
    puts("Hasil Heap Sort : ");
    for (int i = 1; i <= n; i++)
    { // output elemen array
        printf("%d ", arr[i]);
    }
    puts("");

    printf("Masukan elemen array yang inggin dihapus : ");
    scanf("%d", &number);
    deleteHeap(arr, n, number); // memanggil fungsi deleteHeap
    printf("\n");

    puts("Hasil Heap Sort : ");
    for (int i = 1; i <= n - 1; i++)
    { // output elemen array
        printf("%d ", arr[i]);
    }
} // end main