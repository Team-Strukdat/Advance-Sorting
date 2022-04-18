#include "header.h"
#include <stdio.h>

int main()
{
  int q;
  printf("How many elements do you want to insert? ");
  scanf("%d", &q);

  int A[q];
  printf("Insert the elements:\n");
  for (int i = 0; i < q; i++)
  {
    int insert;
    scanf("%d", &insert);
    A[i] = insert;
  }

  quickSort(A, 0, q - 1);
  printArray(A, q);

  return 0;
}

/*   
A function is given an integer array, A, and two subscripts, m and n. The function must
rearrange the elements A[m] to A[n] and return the subscript d such that all elements
to the left of d are less than or equal to A[d] and all elements to the right of d are greater
than A[d].
*/