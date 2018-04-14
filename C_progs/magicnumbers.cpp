/*
 * magicnumbers.cpp
 * 
 * Copyright 03/05/2018 penjo <penjo@vik3rn35>
 */


#include <stdio.h>
#include <ctype.h>
#include "magicnums.h"

int main()
{
	int temp, summ;
	char abort = 'N';
	
	while(abort == 'N')
	{
		summ = 0;
		clrscr();
		purpose();
		
		temp = arrayOne();
		summ = sum(answer(), summ, temp);
		clrscr();

		temp = arrayTwo();
		summ = sum(answer(), summ, temp);
		clrscr();
		
		temp = arrayThree();
		summ = sum(answer(), summ, temp);
		clrscr();

		temp = arrayFour();
		summ = sum(answer(), summ, temp);
		clrscr();

		temp = arrayFive();
		summ = sum(answer(), summ, temp);
		clrscr();

		temp = arraySix();
		summ = sum(answer(), summ, temp);
		clrscr();

		printf("The number you thought was number : %d\n", summ);
		printf("Abort? : (y/n)");
		scanf(" %c", &abort);
		abort = toupper(abort);
	}
	return 0;
}

