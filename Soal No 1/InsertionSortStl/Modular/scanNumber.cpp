#include "header.h"
using namespace std;

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