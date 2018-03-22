#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int min,max,mid, list[20],num,temp,flag = 0;

    min = 0;
    max = 20;
    mid = (min + max) / 2;


    for(int i = 0;i < 20;i++)
    {
        list[i] = rand() % 100;
    }

    for(int i = 0; i < 19; i++)
		{
			for(int j = 0; j < 19 - i; j++)
			{
				if(list[j] > list[j+1])
				{
					temp = list[j];
					list[j] = list[j+1];
					list[j+1] = temp;
				}	
			}
		}
    for(int i = 0;i < 20;i++)
    {
        printf("%i\n", list[i]);
    }
    printf("What number are you looking for? : ");
    scanf("%i", &num);
    while(min <= max)
    {
        if(num == list[mid])
        {
            printf("Your num %i is in the list", num);
            flag = 1;
            break;
        }
        if(num > list[mid])
        {
            min = mid + 1;
        }
        if(num < list[mid])
        {
            max = mid - 1;
        }
        mid = (min + max) / 2;
    }
    if(flag == 0)
    {
        printf("Your number does not exist");
    }
}