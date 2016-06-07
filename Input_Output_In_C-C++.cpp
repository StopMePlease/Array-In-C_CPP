#include <stdio.h>
#include "Searching_Methods.h"
#include "Sort_Methods.h"
#include "Add_And_Delete.h"

#define MAX 100

void Input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("\nInput element[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void Output(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("\nElement[%d]: %d", i, a[i]);
	}
}

int main()
{
	int a[MAX];
	int n;
	printf("How many elements do you want to input: ");
	scanf("%d", &n);
	Input(a, n);
	//=======================================
		//int max = Find_Max(a, n);
		//printf("\Max = %d", max);
	//=======================================
		//InterchangeSort(a, n);
	//=======================================
		//AddOneElement(a, n, 1, 69);
	//=======================================
		DeleteOneElement(a, n, 2);
	//=======================================
	Output(a, n);
	
	return 0;
}