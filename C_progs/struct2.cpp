#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int summary(int x, int z);
int douvle(int x);
void fun1();

int main()
{
	int a,b,sum;
	printf("Give number 1 : ");
	scanf("%d", &a);
	printf("Give number 2 : ");
	scanf("%d", &b);
	
	sum = summary(a,b);
	printf("Total is : %d", sum);
}
void fun1()
{
	int number;
	
	printf("Give number : ");
	scanf("%d", &number);
	printf("%d", douvle(number));
}

int douvle(int x)
{
	return x * 2;
}

int summary(int x, int z)
{
	return x + z;
}
