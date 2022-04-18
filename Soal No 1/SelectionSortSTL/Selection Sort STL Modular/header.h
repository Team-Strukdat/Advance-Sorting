/*
Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/*
Deskripsi :
Sorting menggunakan Selection Sort dengan STL
*/

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

// Prototipe Function
void print(const vector<int> &array, int sat);
void scanNumber(vector<int> &array, FILE *in, int *n);
void selection_sort(vector<int> &array);
