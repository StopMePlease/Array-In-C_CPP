#include <stdio.h>
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

int main()
{
	int a[MAX];
	int n;
	printf("How many elements do you want to input: ");
	scanf("%d", &n);
	Input(a, n);
	//=========================================
	int max = Find_Max(a, n);
	printf("\nMax = %d", max);
	//=========================================
	Output(a, n);
	return 0;
}