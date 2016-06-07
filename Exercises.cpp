#include "Exercises.h"
#include "Add_And_Delete.h"
#include <limits.h>
#include <stdlib.h>
#include <time.h>

void DeleteEvenElement(int a[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			DeleteOneElement(a, n, i);
			i--;
		}
	}
}

void Add_0_behind_Odd_ele(int a[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			AddOneElement(a, n, i, 0);
			i++;
		}
	}
}

int Find_X_Position(int a[], int n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			return i;
		}
	}
}

int Positive_Min(int a[], int n)
{
	int min = INT_MAX;
	int check = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			check = 1;
			if(a[i] < min)
			{
				min = a[i];
			}
		}
	}
	if(check == 0)
	{
		return -1;
	}
	return min;
}

void Random_Array(int a[], int n)
{
	srand(time(0));
	// random from 1 -> 20
	for(int i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 20;
	}
}