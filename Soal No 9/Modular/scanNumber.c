#include "header.h"

void scanNumber(int arr[], int *a)
{
    for (int i = 0; i < *a; i++)
    {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}