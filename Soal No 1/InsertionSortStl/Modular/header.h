/*
Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/*
Deskripsi :
Sorting menggunakan Insertionsort dengan STL
*/

// C++ program to implement insertion sort using STL.
#include <bits/stdc++.h>
using namespace std;

void insertionSort(std::vector<int> &vec);
void printVector(vector<int> &v1, int sat, int n);
void scanNumber(vector<int> &v1, FILE *in, int *n);