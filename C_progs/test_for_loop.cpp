#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y = 0, z = 0, b = 0, percent;
	float mo, grades, sum = 0.0;
	bool flag = false;
	
	
	do
	{
		printf("How many students?: ");
		scanf("%d", &x);
		
	}while(x <= 0);
	
	for(int i = 0;i < x;i++)
	{
		grades = rand() % 10;
		printf("Give grades : %.1f\n", grades);
		
		while((grades > 10) || (grades < 0))
		{
			grades = rand() % 10;
			printf("Enter grade : %.1f\n", grades);
			//scanf("%f", &grades);
		}
				
		if(grades >=8)
		{
			y++;
			b++;
			sum += grades;
			flag = true;
		}
		else if(grades < 8)
		{
			z++;
		}
	}
	
	mo = sum / b;
	percent = (100 * y) / x;
	printf("%d students have passed!\n", y);
	if(z > 0)
	{
		printf("%d didn't pass!\n", z);
	}
	else
	{
		printf("All have passed!Well Done!\n");
	}
	if(flag == true)
	{
		printf("MO is %.1f\n", mo);
		printf("%d %% have passed!\n", percent);
	}
	
}
