#include <iostream>
#include <vector>
using namespace std;

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

void Quicksort(vector<int> &v, int start, int end)
{

	if (start < end)
	{
		int p = Partition(v, start, end);
		Quicksort(v, start, p - 1);
		Quicksort(v, p + 1, end);
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

int main()
{

	vector<int> v;
	// Init Time Variable
	clock_t start, end;
	int n;
	FILE *in;
	FILE *out;
	out = fopen("Kesimpulan.txt", "w");

	// 10
	n = 0;
	in = fopen("input10.txt", "r");
	scanNumber(v, in, &n);
	start = clock();
	Quicksort(v, 0, n - 1);
	end = clock();
	printVector(v, 1, n);
	fprintf(out, "TIME 10: %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v.clear();

	// 100
	n = 0;
	in = fopen("input100.txt", "r");
	scanNumber(v, in, &n);
	start = clock();
	Quicksort(v, 0, n - 1);
	end = clock();
	printVector(v, 2, n);
	fprintf(out, "TIME 100: %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v.clear();

	// 1000
	n = 0;
	in = fopen("input1000.txt", "r");
	scanNumber(v, in, &n);
	start = clock();
	Quicksort(v, 0, n - 1);
	end = clock();
	printVector(v, 3, n);
	fprintf(out, "TIME 1000: %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v.clear();

	// 10000
	n = 0;
	in = fopen("input10000.txt", "r");
	scanNumber(v, in, &n);
	start = clock();
	Quicksort(v, 0, n - 1);
	end = clock();
	printVector(v, 4, n);
	fprintf(out, "TIME 10000: %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v.clear();

	// 100000
	n = 0;
	in = fopen("input100000.txt", "r");
	scanNumber(v, in, &n);
	start = clock();
	Quicksort(v, 0, n - 1);
	end = clock();
	printVector(v, 5, n);
	fprintf(out, "TIME 100000: %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	fclose(in);
	v.clear();

	fclose(out);
	return 0;
}