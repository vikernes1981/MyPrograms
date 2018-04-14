#include <stdio.h>
#include <stdlib.h>

int main()
{
	int list1[100],temp;
	char name[101],tempc,ans;
	
	for(int f = 0;f < 5;f++)
	{
		printf("Name? : \n");
		scanf(" %c", &name[f]);
		printf("Grade? : \n");
		scanf("%i", &list1[f]);
	}
	printf("Sort by name or grade?('n' or 'g') : \n");
	scanf(" %c", &ans);
	if(ans == 'g')
	{
	
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 4 - i; j++)
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
		for(int i = 0; i < 4; i++)
		{
			for(int j = 0; j < 4 - i; j++)
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
	for(int i = 0;i< 5;i++)
	{
		printf("%c = %i\n", name[i], list1[i]);
	}
	
}
