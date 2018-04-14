#include <stdio.h>
#include <stdlib.h>

void good_morning()
{
	printf("Good Morning!\n");
}

void max(int a[], int n)
{
	int max,min;
	max = a[0];
	min = a[0];
	for(int i = 1;i < n;i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
		if(a[i] < min)
		{
			min = a[i];
		}
		printf("%d\n", a[i]);
	}
	printf("Max is : %d\n", max);
	printf("Min is : %dn", min);
}

int *initial_table()
{
	static int list[10];
	for(int i = 0;i < 10;i++)
	{
		list[i] = (rand() % 100 ) + 1;
	}
	return list;
}
