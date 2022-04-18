/*
Kelompok 9 :
    1. Robby Ulung Pambudi (5025211042)
    2. M. Armand Giovani (5025211054)
    3. Fathin Muhashibi Putra (5025211229)
*/

/*
Deskripsi :
Heap disimpan dalam array integer satu dimensi num[1..n] dengan nilai terbesar di posisi 1.
Berikan algoritma efisien yang menghapus root dan mengatur ulang elemen lainnya
sehingga heap sekarang menempati num[1] hingga num[n-1].

Penyelesaian :

*/
// Prototipe Fungsi

void makeHeap(int heap[], int n);
void deleteHeap(int heap[], int n, int number);
