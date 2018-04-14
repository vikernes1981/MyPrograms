#include <stdio.h>
#include <stdlib.h>

int main() 
{
	FILE *infile;
	char buf[1000];
	int x, y[30], z[6];

	infile =fopen("/home/penjo/astrolavos_in.txt","w");
	if (!infile)
	{
		return 1;
	}
	printf("Give number of gears : ");
	scanf("%d", &x);
	fprintf(infile, "%d\n", x);
	
	for(int i = 0;i < x;i++)
	{
		y[i] = rand() % 101;
		fprintf(infile, "%d ", y[i]);
	}
	fprintf(infile, "\n");
	for(int i = 0;i < 6;i++)
	{
		z[i] = rand() % x;
	}
	z[0] = rand() % 1000;
	for(int i = 0;i < 6;i++)
	{
		fprintf(infile, "%d ", z[i]);
	}

	fclose(infile);
 	return 0;
}
