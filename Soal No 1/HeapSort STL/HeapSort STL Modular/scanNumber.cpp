#include "header.h"
using namespace std;
// Function To Scan Number to v1
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
