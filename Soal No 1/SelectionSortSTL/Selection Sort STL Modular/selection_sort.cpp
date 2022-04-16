#include "header.h"

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

