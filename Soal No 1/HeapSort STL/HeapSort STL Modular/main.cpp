#include "header.h"

using namespace std;

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
	v1.empty();
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
	v1.empty();
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
	v1.empty();
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
	v1.empty();
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
	v1.empty();
	fclose(out);

	return 0;
}