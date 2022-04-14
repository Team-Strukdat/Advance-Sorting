#include "header.h"
using namespace std;

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