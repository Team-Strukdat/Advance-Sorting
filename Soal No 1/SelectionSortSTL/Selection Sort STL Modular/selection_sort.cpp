#include "header.h"
using namespace std;

void selection_sort(vector<int> &array)
{
    int n = array.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        swap(array[i], array[min]);
    }
}