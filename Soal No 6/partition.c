#include "header.h"
#include <stdio.h>

int flag = 0;
int partition(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  if (flag != 1)
    printf("Pivot = %d\n", pivot);
  swap(&arr[i + 1], &arr[high]);
  flag = 1;
  return (i + 1);
}