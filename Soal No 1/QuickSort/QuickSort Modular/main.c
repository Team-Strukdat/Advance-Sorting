#include "header.h"

long long int comparation = 0;

// main function
int main()
{
    int data[100000];
    int n = 0;
    FILE *in;
    FILE *kesimpulan = fopen("kesimpulan.txt", "w");

    // Seting variable Time
    clock_t start, end;
    // 10 Data
    in = fopen("input10.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 1);
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "10 Data memakan waktu %f ms\n", time_taken);
    fprintf(kesimpulan, "comparation %lld\n", comparation);
    comparation = 0;
    fclose(in);

    // 100 data
    in = fopen("input100.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 2);
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "100 Data memakan waktu %f ms\n", time_taken);
    fprintf(kesimpulan, "comparation %lld\n", comparation);
    comparation = 0;
    fclose(in);

    // 1000 data
    in = fopen("input1000.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 3);
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "1000 Data memakan waktu %f ms\n", time_taken);
    fprintf(kesimpulan, "comparation %lld\n", comparation);
    comparation = 0;
    fclose(in);

    // 10000 data
    in = fopen("input10000.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 4);
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "10000 Data memakan waktu %f ms\n", time_taken);
    fprintf(kesimpulan, "Stability %lld\n", comparation);
    comparation = 0;
    fclose(in);

    // 100000 data
    in = fopen("input100000.txt", "r");
    scaningNumber(data, in, &n);
    start = clock();
    quickSort(data, 0, n - 1);
    end = clock();
    createArray(data, n, 5);
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; // in seconds
    fprintf(kesimpulan, "100000 Data memakan waktu %f ms\n", time_taken);
    fprintf(kesimpulan, "comparation %lld\n", comparation);
    fclose(in);

    fclose(kesimpulan);
    printf("Sorted Complete\n");
    return 0;
}