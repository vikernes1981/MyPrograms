#include <time.h>
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int num, msec, list[100];
	
	while(false)
	{
		
	}
	for(int i = 0;i < 100;i++)
	{
		list[i] = rand() % 60;
	}
	
	clock_t start = clock();
	clock_t diff;
	
	
	for(int i = 0;i < 99;i++)
	{
		for(int j = 0;j < 99 - i;j++)
		{
			if(list[i] > list[i+1])
			{
				num = list[i];
				list[i] = list[i+1];
				list[i+1] = num;
			}
		}
	}

	diff = clock() - start;
	
	msec = diff * 1000 / CLOCKS_PER_SEC;
	printf(" %d sec %d mill", msec / 1000, msec % 1000);
	
}
