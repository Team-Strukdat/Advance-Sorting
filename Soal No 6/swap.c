// Fungsi untuk menukar dua data variabel

#include "header.h"

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}