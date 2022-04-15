/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovani
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Sorting menggunakan QuickSort dengan STL
*/

#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int> &v, int start, int end);
void printVector(vector<int> &v1, int sat, int n);
void Quicksort(vector<int> &v, int start, int end);
void scanNumber(vector<int> &v1, FILE *in, int *n);
