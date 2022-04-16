/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovani
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Sorting menggunakan Selection Sort dengan STL
*/

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void selection_sort(vector<T> &array);

template <typename T>
void print(const vector<T> &array, int sat);

void scanNumber(vector<int> &v1, FILE *in, int *n);
