#include <stdio.h>
#include <stdlib.h>
#include "swaping.h"


int main()
{
	int a[] = {123,345,567,111,1,2,5,8,1000,23,456,678,876,1111};
	int n = sizeof(a)/sizeof(a[0]);
	
	Bubble(a,n);
	printf("\n");
	Selection(a,n);
	printf("\n");
	Selection(a,n);
		
}
