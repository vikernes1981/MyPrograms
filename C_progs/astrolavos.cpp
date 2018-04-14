/*
 * astrolavos.cpp
 * Proodos Omiros I.E.K 15/12/2017
 * 
 * Copyright 2017 penjo <penjo@vik3rn35>
 */


#include <stdio.h>
#include <stdlib.h>

// Function to create a file for our main program to read
int random_num(int n) 
{
	FILE *infile;
	int y[100], z[6], a;
	
	//Creates the input file
	infile =fopen("/home/penjo/astrolavos_in.txt","w");
	
	//Gets first N number of input on first line
	fprintf(infile, "%d\n", n);
	
	//Generate and write N random numbers on second line
	for(int i = 0;i < n;i++)
	{
		//Makes sure all gears have less than 100 teeth
		y[i] = rand() % 100 + 10;
		if(y[i] > 100)
		{
			a = y[i] - 100;
			y[i] -= a;
		}
		fprintf(infile, "%d ", y[i]);
	}
	
	//Generate and write 6 random numbers
	fprintf(infile, "\n");
	for(int i = 0;i < 6;i++)
	{
		z[i] = rand() % n + 2;
	}
	
	//Replace 1st number of Z list with a random number <= 500
	z[0] = 1 + rand() % 500;
	for(int i = 0;i < 6;i++)
	{
		//Makes sure all numbers are <= N
		if((z[i] > n) && (i > 0))
		{
			a = z[i] - n;
			z[i] -= a;
		}
		
		//Generate and write 6 random numbers on 3rd line
		fprintf(infile, "%d ", z[i]);
	}
	
	//Close file
	fclose(infile);
 	return 0;
}

int main()
{
	int gearnum,gearteeth[100],spins[100],count = 1, x = 0,y;
	float solution[100];
	FILE *infile;
	FILE *outfile = fopen("/home/penjo/astrolavos_out.txt", "w");


	printf("Input file will be created in current working directory!\n");
	printf("Give number of gears : ");
	scanf("%d", &y);
	
	//Checks if Y is less than 6
	while(y < 6)
	{
		printf("Give a number more than 5! : ");
		scanf("%d", &y);
	}
	
	random_num(y);
	
	infile = fopen("/home/penjo/astrolavos_in.txt","r");
	//Check if the file exists or not
	if (!infile)
	{
		return 1;
	}
	//Read the number of gears from file (1st line)
	fscanf(infile, "%d", &gearnum);
	printf("How many gears? : %d\n", gearnum);
	
	//Read the number of gearteeth from file and insert values in list (2nd line)
	for(int i = 0;i < gearnum;i++)
	{
		fscanf(infile, "%d,", &gearteeth[i]);
		printf("Gear number %d\nTeeth : %d\n", count++, gearteeth[i]);	
	}
	
	//Read number of spins and position of gears we need values from (3rd line)
	for(int i = 0;i < gearnum;i++)
	{
		fscanf(infile, "%d,", &spins[i]);
		solution[i] = spins[0] / (float)gearteeth[i+1] * gearteeth[0];
	}
	
	//Close input file
	fclose(infile);
	
	printf("\n");
	printf("First gear will spin %d times!\n", spins[0]);
	printf("Gears to be checked will be : ");
	for(int i = 1;i < 6;i++)
	{
		printf("%d ", spins[i]);
	}
	printf("\n");
	//Final output on terminal/output.file
	for(int i = 1;i < 6;i++)
	{
		x = spins[i] -1;
		printf("%.3f ", solution[x-1]);
		fprintf(outfile, "%.3f ", solution[x-1]);
	}
	printf("\n");
	printf("Output file is created in current working directory!\n");
	
	//Close output file
	fclose(outfile);
	
	return 0;
}
