/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovani
3. Fathin Muhashibi Putra
*/

// HeapSortSTL.cpp : Defines the entry point for the console application.
#include <bits/stdc++.h>
using namespace std;

// Function To Scan Number to v1
void scanNumber(vector<int> &v1, FILE *in, int *n)
{
	int dat;
	while (!feof(in))
	{
		fscanf(in, "%d", &dat);
		v1.push_back(dat);
		*n = *n + 1;
	}
}

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

int main()
{

	// Initializing a vector
	FILE *in;
	FILE *out;
	int n;
	// Initializing time variable
	clock_t start, end;

	out = fopen("Kesimpulan.txt", "w");

	// Input 10
	in = fopen("input10.txt", "r");
	vector<int> v1;
	scanNumber(v1, in, &n);

	start = clock();
	// // Converting vector into a heap
	// // using make_heap()
	make_heap(v1.begin(), v1.end());

	// // Displaying heap elements

	// // sorting heap using sort_heap()
	sort_heap(v1.begin(), v1.end());
	end = clock();
	printVector(v1, 1, n);
	fprintf(out, "Time taken for 10 elements is %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v1.clear();
	// Input 100

	in = fopen("input100.txt", "r");
	n = 0;
	scanNumber(v1, in, &n);
	start = clock();
	make_heap(v1.begin(), v1.end());
	sort_heap(v1.begin(), v1.end());
	end = clock();
	printVector(v1, 2, n);
	fprintf(out, "Time taken for 100 elements is %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v1.clear();
	// Input 1000
	in = fopen("input1000.txt", "r");
	n = 0;
	scanNumber(v1, in, &n);
	start = clock();
	make_heap(v1.begin(), v1.end());
	sort_heap(v1.begin(), v1.end());
	end = clock();
	printVector(v1, 3, n);
	fprintf(out, "Time taken for 1000 elements is %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v1.clear();
	// Input 10000
	in = fopen("input10000.txt", "r");
	n = 0;
	scanNumber(v1, in, &n);
	start = clock();
	make_heap(v1.begin(), v1.end());
	sort_heap(v1.begin(), v1.end());
	end = clock();
	printVector(v1, 4, n);
	fprintf(out, "Time taken for 10000 elements is %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v1.clear();
	// Input 100000
	in = fopen("input100000.txt", "r");
	n = 0;
	scanNumber(v1, in, &n);
	start = clock();
	make_heap(v1.begin(), v1.end());
	sort_heap(v1.begin(), v1.end());
	end = clock();
	printVector(v1, 5, n);
	fprintf(out, "Time taken for 100000 elements is %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v1.clear();
	fclose(out);

	return 0;
}