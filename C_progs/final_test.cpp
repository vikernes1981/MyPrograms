#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int list[11],list1[11], count = 0,count1 = count + 1, total;
	int j,temp, remaining, msec, msec1;
    clock_t start, timer, diff, differ, starting;
	
	start = clock(); 													    // general clock
	while(count < 11)
	{	
		timer = clock();												    // clock for each item in list
    	printf("Enter time : \n");
    	scanf("%d", &list[count]);

		differ     = clock() - timer;
		msec1      = differ * 1000 / CLOCKS_PER_SEC;
		msec1      = msec1 / 1000; 											// item clock end
		starting   = (((clock() - start)*1000 / CLOCKS_PER_SEC) / 1000);    //total time from program
		total      = list[count] + starting;         						// total time + item value
		remaining  = list[count] - starting; 							    // remaining time 
		
		count++;
		printf("%d\n", count);
		
		while((remaining > 0) && (count1 < 11))
		{
			printf("Enter more time :D : ");
			scanf("%d", &list[count1]);
			count1++;
			
			for(int i = 0;i < 11;i++)
    		{
        		j = i;

	        	while(j > 0 && list[j] < list[j-1])
	        	{
	            	temp      = list[j];
	            	list[j]   = list[j-1];
	            	list[j-1] = temp;
	            	j--;
	        	}
    		}
			if(starting == total)
			{
				total += list[count1];
			}
		}
		
		printf("msec = %d, total = %d, starting = %d, remaining = %d\n", msec1, total, starting, remaining);
	}
	diff = clock() - start;
    msec = diff * 1000 / CLOCKS_PER_SEC;
    msec = msec / 1000; 												   //clock end
    
    for(int i = 0;i < 11;i++)
    {
    	printf("%d\n", list[i]);
	}
    printf("%d sec passed \n\n", msec);
}
