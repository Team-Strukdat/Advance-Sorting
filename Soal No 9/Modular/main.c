#include "header.h"
int main()
{
    int arr[1000];
    int n;
    int min = 10000;
    printf("Masukkan jumlah elemen : ");
    scanf("%d", &n);
    scanNumber(arr, &n);
    findKthSmallest(arr, n, &min);
    printf("Nilai Minimum dari array adalah %d\n", min);
    printf("\n");
    return 0;
}