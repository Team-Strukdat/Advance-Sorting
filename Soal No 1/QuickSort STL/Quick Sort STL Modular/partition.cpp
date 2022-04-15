#include "header.h"

// last element is taken as pivot
int Partition(vector<int> &v, int start, int end)
{

	int pivot = end;
	int j = start;
	for (int i = start; i < end; ++i)
	{
		if (v[i] < v[pivot])
		{
			swap(v[i], v[j]);
			++j;
		}
	}
	swap(v[j], v[pivot]);
	return j;
}