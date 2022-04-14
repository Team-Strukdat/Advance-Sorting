#include "header.h"

long long int stability = 0;
// Driver code
int main()
{
    int arr[100000];
    int n = 0;
    FILE *in;
    FILE *kesimpulan;
    // Seting time variable
    clock_t starttime, endtime;

    // 10 Data
    in = fopen("input10.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 1);
    // Print time
    kesimpulan = fopen("kesimpulan.txt", "a");
    fprintf(kesimpulan, "10 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fprintf(kesimpulan, "Comparasion : %llu\n", stability);
    stability = 0;
    fclose(in);

    // 100 Data
    n = 0;
    in = fopen("input100.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 2);
    // Print time
    fprintf(kesimpulan, "100 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fprintf(kesimpulan, "Comparasion : %llu\n", stability);
    stability = 0;
    fclose(in);

    // 1000 data
    n = 0;
    in = fopen("input1000.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 3);
    // Print time
    fprintf(kesimpulan, "1000 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fprintf(kesimpulan, "Comparasion : %llu\n", stability);
    stability = 0;
    fclose(in);

    // 10000 data
    n = 0;
    in = fopen("input10000.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 4);
    // Print time
    fprintf(kesimpulan, "10000 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fprintf(kesimpulan, "Comparasion : %llu\n", stability);
    stability = 0;
    fclose(in);

    // 100000 data
    n = 0;
    in = fopen("input100000.txt", "r");
    scaningNumber(in, arr, &n);
    starttime = clock();
    // Sorted
    heapSort(arr, n);
    endtime = clock();
    // Print sorted array
    printArray(arr, n, 5);
    // Print time
    fprintf(kesimpulan, "100000 Data memakan waktu : %f\n", (double)(endtime - starttime) / CLOCKS_PER_SEC);
    fprintf(kesimpulan, "Comparasion : %llu\n", stability);
    stability = 0;
    fclose(in);

    fclose(kesimpulan);

    printf("Array is Sorted \n");
}