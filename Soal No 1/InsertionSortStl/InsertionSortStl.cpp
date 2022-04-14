// C++ program to implement insertion sort using STL.
#include <bits/stdc++.h>
using namespace std;
  
// Function to sort the array
void insertionSort(vector<int> &vec)
{
    for (auto it = vec.begin(); it != vec.end(); it++)
    {        
        // Searching the upper bound, i.e., first 
        // element greater than *it from beginning
        auto const insertion_point = 
                upper_bound(vec.begin(), it, *it);
          
        // Shifting the unsorted part
        rotate(insertion_point, it, it+1);        
    }
}
  
// Function to print the array
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
  
// Driver code
int main()
{
    // Time variable
    clock_t start, end;

    vector<int> arr; 
    int n = 0;
    FILE *in;
    FILE *out;
    out = fopen("Kesimpulan.txt", "w");

    // 10
    in = fopen("input10.txt", "r");
    scanNumber(arr, in, &n);
    start = clock();
    insertionSort(arr);   
    end = clock();
    printVector(arr, 1, n);
    fprintf(out, "Waktu yang dibutuhkan 10 data adalah : %f \n", (end - start) / (double) CLOCKS_PER_SEC);
    fclose(in);

    // 100
    arr.clear();
    n = 0;
    in = fopen("input100.txt", "r");
    scanNumber(arr, in, &n);
    start = clock();
    insertionSort(arr);   
    end = clock();
    printVector(arr, 2, n);
    fprintf(out, "Waktu yang dibutuhkan 100 data adalah : %f \n", (end - start) / (double) CLOCKS_PER_SEC);
    fclose(in);

    // 1000
    arr.clear();
    n = 0;
    in = fopen("input1000.txt", "r");
    scanNumber(arr, in, &n);
    start = clock();
    insertionSort(arr);   
    end = clock();
    printVector(arr, 3, n);
    fprintf(out, "Waktu yang dibutuhkan 1000 data adalah : %f \n", (end - start) / (double) CLOCKS_PER_SEC);
    fclose(in);

    // 10000
    arr.clear();
    n = 0;
    in = fopen("input10000.txt", "r");
    scanNumber(arr, in, &n);
    start = clock();
    insertionSort(arr);   
    end = clock();
    printVector(arr, 4, n);
    fprintf(out, "Waktu yang dibutuhkan 10000 data adalah : %f \n", (end - start) / (double) CLOCKS_PER_SEC);
    fclose(in);

    // 100000
    arr.clear();
    n = 0;
    in = fopen("input100000.txt", "r");
    scanNumber(arr, in, &n);
    start = clock();
    insertionSort(arr);   
    end = clock();
    printVector(arr, 5, n);
    fprintf(out, "Waktu yang dibutuhkan 100000 data adalah : %f \n", (end - start) / (double) CLOCKS_PER_SEC);

    fclose(in);
    fclose(out);
    return 0;


}