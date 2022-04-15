#include "header.h"

void printVector(vector<int> &v1, int sat, int n)
{
	FILE *out;
	if (sat == 1)
	{
		out = fopen("output_10.txt", "w");
		for (int i = 0; i < n; i++)
		{
			fprintf(out, "%d\n", v1[i]);
		}
	}
	else if (sat == 2)
	{
		out = fopen("output_100.txt", "w");
		for (int i = 0; i < n; i++)
		{
			fprintf(out, "%d\n", v1[i]);
		}
	}
	else if (sat == 3)
	{
		out = fopen("output_1000.txt", "w");
		for (int i = 0; i < n; i++)
		{
			fprintf(out, "%d\n", v1[i]);
		}
	}
	else if (sat == 4)
	{
		out = fopen("output_10000.txt", "w");
		for (int i = 0; i < n; i++)
		{
			fprintf(out, "%d\n", v1[i]);
		}
	}
	else if (sat == 5)
	{
		out = fopen("output_100000.txt", "w");
		for (int i = 0; i < n; i++)
		{
			fprintf(out, "%d\n", v1[i]);
		}
	}
}
