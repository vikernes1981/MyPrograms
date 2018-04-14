#include <stdio.h>
#include <stdlib.h>

int main()
{
	char charlist[1001],tempchar = 0;
	int listime[1001], waitime[1002], totaltime[1001], sum = 0, temptime = 0;
	double mo;
	
	// lists creator
	for(int i = 0; i < 999; i++)
	{
		listime[i] = rand() % 60;
		charlist[i] = 'a' + (rand() % 26);
	}
	// bubble sorting 
	for(int i = 0;i < 998;i++)
	{
		for(int j = 0;j < 998 - i;j++)
		{
			if(listime[j] > listime[j+1])
			{
				temptime = listime[j];
				listime[j] = listime[j+1];
				listime[j+1] = temptime;
				tempchar = charlist[j];
				charlist[j] = charlist[j+1];
				charlist[j+1] = tempchar;
			}
			
		}
	}
	
	// adjusting waiting time and total time
	for(int i = 0;i < 999;i++)
	{
		waitime[i+1] = sum += listime[i];
		totaltime[i] = waitime[i+1];
	}
	waitime[0] = 0;
	mo = sum / 999; // mesos oros ekteleshs
	
	// printing results
	for(int i = 0;i < 999;i++)
	{
		printf("charlist = %c ,listime = %i, waitime  = %i, totaltime = %i\n", charlist[i], listime[i], waitime[i], totaltime[i]);
	}
	printf("mesos oros ekteleshs einai %.2f", mo);
}
