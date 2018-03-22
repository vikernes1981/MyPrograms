/*
 * testpointer.cpp
 *
 * Copyright 2018 penjo <penjo@vik3rn35>
 * 
 */
#include <stdio.h>
#include <stdlib.h>
int testfunc(int *x)
{
	printf("Enter the new value of X : ");
	scanf("%d", x);
	return *x;
}
int fact(int x)
{
	if(x == 1)
	{
		return 1;
	}
	else
	{
		x *= fact(x - 1);
	}
	return x;
}
int main()
{
	int x = 10;
	int *px = &x;
	printf("Pointer of x is %d\n", *px);
	printf("Value of x is %d\n", x);
//	printf("Address of x is %d and address of px is %d\n",&x,&px);
	testfunc(px);
	printf("Pointer of x after func is %d\n", *px);
	printf("Value of x after func is %d\n", x);
//	printf("Address of x after func is %d and address of px is %d\n",&x,&px);
	printf("factorial of %d is %d\n",x, fact(*px));
}
