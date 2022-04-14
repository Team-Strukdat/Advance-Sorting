#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void selection_sort(vector<T> &array)
{
    typedef typename vector<T>::iterator Itr;
    Itr itr = array.begin();
    while (itr != array.end())
    {
        Itr itr_min = itr;
        for (Itr i = itr + 1; i != array.end(); i++)
        {
            if (*i < *itr_min)
            {
                itr_min = i;
            }
        }
        iter_swap(itr, itr_min);
        itr++;
    }
}

template <typename T>
void print(const vector<T> &array, int sat)
{
    FILE *in;
    if (sat == 1)
    {
        in = fopen("output_10.txt", "w");
        for (auto itr = array.begin(); itr != array.end(); itr++)
        {
            fprintf(in, "%d\n", *itr);
        }
    }
    else if (sat == 2)
    {
        in = fopen("output_100.txt", "w");
        for (auto itr = array.begin(); itr != array.end(); itr++)
        {
            fprintf(in, "%d\n", *itr);
        }
    }
    else if (sat == 3)
    {
        in = fopen("output_1000.txt", "w");
        for (auto itr = array.begin(); itr != array.end(); itr++)
        {
            fprintf(in, "%d\n", *itr);
        }
    }
    else if (sat == 4)
    {
        in = fopen("output_10000.txt", "w");
        for (auto itr = array.begin(); itr != array.end(); itr++)
        {
            fprintf(in, "%d\n", *itr);
        }
    }
    else if (sat == 5)
    {
        in = fopen("output_100000.txt", "w");
        for (auto itr = array.begin(); itr != array.end(); itr++)
        {
            fprintf(in, "%d\n", *itr);
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
