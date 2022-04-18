#include "header.h"
using namespace std;

int main()
{
    FILE *in;
    FILE *out;
    out = fopen("Kesimpulan.txt", "w");
    int n = 0;

    vector<int> v;
    // Time Variable
    clock_t start, end;

    // 10
    in = fopen("input10.txt", "r");
    scanNumber(v, in, &n);
    start = clock();
    selection_sort(v);
    end = clock();
    print(v, 1);
    fprintf(out, "10\t%f\n", (double)(end - start) / CLOCKS_PER_SEC);
    v.clear();
    n = 0;
    fclose(in);

    // 100
    in = fopen("input100.txt", "r");
    scanNumber(v, in, &n);
    start = clock();
    selection_sort(v);
    end = clock();
    print(v, 2);
    fprintf(out, "100\t%f\n", (double)(end - start) / CLOCKS_PER_SEC);
    v.clear();
    n = 0;
    fclose(in);

    // 1000
    in = fopen("input1000.txt", "r");
    scanNumber(v, in, &n);
    start = clock();
    selection_sort(v);
    end = clock();
    print(v, 3);
    fprintf(out, "1000\t%f\n", (double)(end - start) / CLOCKS_PER_SEC);
    v.clear();
    n = 0;
    fclose(in);

    // 10000
    in = fopen("input10000.txt", "r");
    scanNumber(v, in, &n);
    start = clock();
    selection_sort(v);
    end = clock();
    print(v, 4);
    fprintf(out, "10000\t%f\n", (double)(end - start) / CLOCKS_PER_SEC);
    v.clear();
    n = 0;
    fclose(in);

    // 100000
    in = fopen("input100000.txt", "r");
    scanNumber(v, in, &n);
    start = clock();
    selection_sort(v);
    end = clock();
    print(v, 5);
    fprintf(out, "100000\t%f\n", (double)(end - start) / CLOCKS_PER_SEC);
    v.clear();
    n = 0;
    fclose(in);

    fclose(out);
    return 0;
}