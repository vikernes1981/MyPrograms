#include <stdio.h>
#include <stdlib.h>


int main()
{
	int list1[100],temp,count = 0;
	char name[101],tempc,ans, answer;
	
		
	do{
		
		printf("Name? : \n");
		scanf(" %c", &name[count]);
		
		printf("Grade? : \n");
		scanf("%i", &list1[count]);
		
		printf("Thes na termatiseis to programma? : (y/n)");
		scanf(" %c", &answer);
		count++;
		
	}while(answer != 'y');
	//count--;
	for(int i = 0; i < count; i++)
	{
		printf("%c = %i\n", name[i], list1[i]);
	}
	printf("Sort by name or grade?('n' or 'g') : \n");
	scanf(" %c", &ans);
	if(ans == 'g')
	{
		for(int i = 0; i < count - 1; i++)
		{
			for(int j = i; j < count - i; j++)
			{
				if(list1[j] > list1[j+1])
				{
					
					temp = list1[j];
					list1[j] = list1[j+1];
					list1[j+1] = temp;
					tempc = name[j];
					name[j] = name[j+1];
					name[j+1] = tempc;
				}	
			}
		}
	}
	if(ans == 'n')
	{
		for(int i = 0; i < count - 1; i++)
		{
			for(int j = i; j < count - i; j++)
			{
				if(name[j] > name[j+1])
				{
					tempc = name[j];
					name[j] = name[j+1];
					name[j+1] = tempc;
					temp = list1[j];
					list1[j] = list1[j+1];
					list1[j+1] = temp;
					
				}	
			}
		}
	}
	for(int i = 0;i < count;i++)
	{
		printf("%c = %i\n", name[i], list1[i]);
	}

}
