#include "Searching_Methods.h"

int Find_Max(int a[], int n)
{
	int max = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}