#include "Sort_Methods.h"

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void InterchangeSort(int a[],int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] > a[i])
			{
				Swap(a[i], a[j]);
			}
		}
	}
}

//this function updated from function above
void InterchangeSort(int a[],int n, char d)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(d == 'u')
			{
				if(a[j] > a[i])
				{
					Swap(a[i], a[j]);
				}
			}
			else if(d == 'd')
			{
				if(a[j] < a[i])
				{
					Swap(a[i], a[j]);
				}
			}
		}
	}
}