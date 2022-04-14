#include "header.h"
void findKthSmallest(int arr[], int n, int *min)
{
    if (n == 0)
    {
        *min = arr[0];
    }
    else
    {
        findKthSmallest(arr, n -= 1, min);
        if (arr[n] < *min)
        {
            *min = arr[n];
        }
    }
}