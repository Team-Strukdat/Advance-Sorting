#include "header.h"
using namespace std;

void print(const vector<int> &array, int sat)
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
