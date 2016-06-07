#include "Add_And_Delete.h"

void AddOneElement(int a[], int &n, int pos, int Element_Added)
{
	for(int i = n - 1; i >= pos; i--)
	{
		a[i + 1] = a[i];
	}
	a[pos] = Element_Added;
	n++;
}

void DeleteOneElement(int a[],int &n, int pos)
{
	for(int i = pos + 1; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}