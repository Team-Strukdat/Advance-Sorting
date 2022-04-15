#include "header.h"

void Quicksort(vector<int> &v, int start, int end)
{

	if (start < end)
	{
		int p = Partition(v, start, end);
		Quicksort(v, start, p - 1);
		Quicksort(v, p + 1, end);
	}
}