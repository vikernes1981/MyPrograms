#include <stdio.h>
#include <stdlib.h>

int main()
{
	char charlist[100];
	int listime[100], waitime[101], totaltime[100];
	double mo, sum = 0;
	
	for(int i = 0; i < 100; i++)
	{
		listime[i] = rand() % rand() % 60;
		charlist[i] = 'a' + (rand() % 26);
	}
	for(int i = 0;i < 101;i++)
	{
		waitime[i+1] = sum += listime[i];
		totaltime[i] = waitime[i+1];
	}
	mo = sum / 100;
	waitime[0] = 0;
	for(int i = 0;i < 100;i++)
	{
		printf("charlist = %c ,listime = %i, waitime  = %i, totaltime = %i\n",charlist[i], listime[i], waitime[i], totaltime[i]);
	}
	printf("mesos oros ekteleshs einai %.2f\n", mo);
} 	
