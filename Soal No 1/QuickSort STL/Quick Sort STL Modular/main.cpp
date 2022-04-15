#include "header.h"

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