#include <stdio.h>
#include <stdlib.h>
// fylo,age,vathmoi  x mathites
//mo vathmous male,mo vathmous female,max age male,max age female
int main()
{
	char gender[600],answer;
	int age[650], grades[620];
	int count = 0, flag = 0, flag1 = 0;
	int maxm = 0, maxf = 0,maxfg = 0,maxmg = 0;
	int minfg = 0,minmg = 0,minf = 0, minm = 0;
	float countf = 0,countm = 0,summ = 0,sumfa = 0,summa = 0,sumg = 0, suma = 0,sumf = 0;
	float moa, mog, mofa, moma, mof, mom;
		
	do{
		
		printf("Age please : ");
		scanf("%i", &age[count]);
		while((age[count] < 0) || (age[count] > 120))
		{
			printf("Give a normal age : ");
			scanf("%i", &age[count]);
		}
		printf("Give gender please : ");
		scanf(" %c", &gender[count]);
		
		while(( gender[count] != 'm') && (gender[count] != 'f'))
		{
			printf("Give a normal gender please : ");
			scanf(" %c", &gender[count]);
		}
		
		printf("Give grade please : ");
		scanf("%i", &grades[count]);
		
		while(( grades[count] < 0 ) || (grades[count] > 10))
		{
			printf("Give a normal grade please : ");
			scanf("%i", &grades[count]);
		}
		printf("Thes na termatiseis to programma? : (y/n)");
		scanf(" %c", &answer);
		count++;
	}while(answer != 'y');
	
	for(int i = 0;i < count;i++)
	{
		suma += age[i];
		sumg += grades[i];
		
		if(gender[i] == 'f')
		{
			if((gender[i] == 'f') && (flag == 0))
			{
				maxf = age[i];
				minf = age[i];
				maxfg = grades[i];
				minfg = grades[i];
				flag = 1;
			}
			sumf += grades[i];
			countf++;
			sumfa += age[i];

			if(age[i] > maxf)
			{
				maxf = age[i];
				maxfg = grades[i];
			}
			if(age[i] < minf)
			{
				minf = age[i];
				minfg = grades[i];
			}			
		}
		if(gender[i] == 'm')
		{
			if((gender[i] == 'm') && (flag1 == 0))
			{
				maxm = age[i];
				minm = age[i];
				maxmg = grades[i];
				minmg = grades[i];
				flag1 = 1;
			}
			summ += grades[i];
			countm++;
			summa += age[i];

			if(age[i] > maxm)
			{
				maxm = age[i];
				maxmg = grades[i];
			}
			if(age[i] < minm)
			{
				minm = age[i];
				minmg = grades[i];
			}
		}
	}
	mom = summ / countm;
	mof = sumf / countf;
	moa = suma / count;
	mog = sumg / count;
	mofa = sumfa / countf;
	moma = summa / countm;
	printf("mo grades male : %.2f, mo grades female : %.2f\n\n", mom, mof);
	printf("maxm male age : %i, maxf female age : %i\n\n", maxm, maxf);
	printf("moa age genikws : %.2f, mog genikws grades : %.2f\n\n", moa, mog);
	printf("mofa female age : %.2f, moma male age : %.2f\n\n", mofa, moma);
	printf("Best male is %i years old and has a %i score\n\n", maxm, maxmg);
	printf("Best female is %i years old and has a %i score\n\n", maxf, maxfg);
	printf("Worst male is %i years old and has a %i score\n\n", minm, minmg);
	printf("Worst female is %i years old and has a %i score\n\n", minf, minfg);
}
