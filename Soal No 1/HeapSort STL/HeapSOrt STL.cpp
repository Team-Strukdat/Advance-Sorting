// C++ code to demonstrate the working of 
// is_heap() and is_heap_until()
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	
  	// Generating random numbers in a range of 0-100 
	for(int i = 0; i < n; i++)
		arr[i] = rand()%100+1;

  	// Unsorted array
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	make_heap(arr.begin(), arr.end());  // Building the heap
	sort_heap(arr.begin(), arr.end());  // Heap sort

  	// Sorted array
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}