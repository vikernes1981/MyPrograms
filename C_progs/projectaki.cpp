#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int triangle_p(int x, int y, int z)
{
	return x + y + z;
}

int triangle_e(int x, int y)
{
	return (x * y) / 2;
}

int parallel_p(int x,int y)
{
	return (2 * x) + (2 * y);
}

int parallel_e(int x,int y)
{
	return x * y;
}

float circle_p(float x)
{
	return 2 * 3.14 * x;
}

float circle_e(float x)
{
	return 3.14 * pow(x,2);
}
void kuklos()
{
	float r;
	printf("Give r : ");
	scanf("%f", &r);
	printf("Circle perimeter is : %.1f\n", circle_p(r));
	printf("Circle emvado is : %.1f", circle_e(r));
}
void parallel()
{
	int a,b;
	printf("Give a : ");
	scanf("%d", &a);
	printf("Give b : ");
	scanf("%d", &b);
	printf("Circle perimeter is : %d\n", parallel_p(a,b));
	printf("Circle emvado is : %d", parallel_e(a,b));
}

void triangle()
{
	int a,b,c,d,e;
	printf("Give 1st side : ");
	scanf("%d", &a);
	printf("Give 2nd side : ");
	scanf("%d", &b);
	printf("Give 3rt side : ");
	scanf("%d", &c);
	printf("Give base : ");
	scanf("%d", &d);
	printf("Give height : ");
	scanf("%d", &e);
	printf("Perimeter is : %d\n", triangle_p(a,b,c));
	printf("Emvado is : %d", triangle_e(d,e));
}
int main()
{
	char answer;
	
	printf("Press C for circle, S for square or T for triangle : ");
	scanf(" %c", &answer);
	if((answer == 'c') || (answer == 'C'))
	{
		kuklos();
	}
	else if((answer == 's') || (answer == 'S'))
	{
		parallel();
	}
	else if((answer == 't') || (answer == 'T'))
	{
		triangle();
	}
	else
	{
		printf("Fuck You!!!");
	}

}



