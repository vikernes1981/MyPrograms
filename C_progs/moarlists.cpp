#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0, a, grades = 0, min = 0, max = 0;
	float mo[100], genMax = 0;
	int maxGrades[100], minGrades[100], studnum;
	char answer;
	
	printf("Do you want to add students? (y/n): ");
	scanf(" %c", &answer);
	
	while(answer == 'y')
	{
		printf("How many students? : ");
		scanf("%d", &a);
		while(a <= 0)
		{
			printf("Give correct number of students : ");
			scanf("%d", &a);
		}
		for(int b = 0;b < a;b++)
		{
			for(int i = 0;i < 3;i++)
			{
				grades = rand() % 10 + 1;
				if(i == 0)
				{
					max = grades;
					min = grades;
				}
				if(grades > max)
				{
					max = grades;
				}
				if(grades < min)
				{
					min = grades;
				}
				sum += grades;
				mo[b] = sum / 3;
			}
			maxGrades[b] = max;
			minGrades[b] = min;
			sum = 0;
		}
		
		for(int i = 0;i < a;i++)
		{
			printf("Student #%d\n", i+1);
			printf("Mesos Oros = %.1f\n", mo[i]);
			printf("Max grades are : %d\n", maxGrades[i]);
			printf("Min grades are : %d\n\n", minGrades[i]);
			if(i == 0)
			{
				genMax = mo[i];
				studnum = i;
			}
			if(mo[i] > genMax)
			{
				genMax = mo[i];
				studnum = i;
			}
		}
		printf("Max Mesos Oros of all is from student number %d: %.1f\n\n", studnum + 1, genMax);
		printf("Do you want to add more students? (y/n) : ");
		scanf(" %c", &answer);
	}
	if(answer != 'y')
	{
		printf("Bye Bye!!Aborting\n");
		for(int i = 0;i < a;i++)
		{
			printf("%.1f\n", mo[i]);
		}
	}
}
