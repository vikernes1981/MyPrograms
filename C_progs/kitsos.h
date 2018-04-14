#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
// prints current date on txt file
void dater()
{
	time_t current_time;
    char* c_time_string;
    /* Obtain current time. */
    current_time = time(NULL);
    FILE *info_final = fopen("info_final.txt", "w+");
    c_time_string = ctime(&current_time);
    fprintf(info_final,"Program started sorting at %s", c_time_string);
    fclose(info_final);
    return;
}
// prints time needed to complete a task on txt file
void hours_timer(clock_t timer1) 
{
    int sec = timer1 / 1000000;
    int hours,minutes,seconds;
    time_t current_time;
    char* c_time_string;
    /* Obtain current time. */
    current_time = time(NULL);
    FILE *info_final = fopen("info_final.txt", "a");
    c_time_string = ctime(&current_time);
    if(sec <= 60)
    {
        fprintf(info_final, "\nIt took you %d seconds to get all your results!\n\nProgram ended at %s",sec, c_time_string);
    }
    else if((sec > 60) && (sec <= 3600))
    {
        minutes = sec / 60;
        seconds = sec % 60;
        fprintf(info_final, "\nIt took you %d minutes and %d seconds to get all your results!\n\nProgram ended at %s", minutes, seconds,c_time_string);
    }
    else
    {
        hours = sec / 3600;
        minutes = sec % 60;
        seconds = minutes / 60;
        fprintf(info_final, "\nIt took you %d hours %d minutes and %d seconds to get all your results!\n\nProgram ended at %s", hours, minutes, seconds,c_time_string);
    }
    fclose(info_final);
    return;
}
// brings the percent of Males with Highest Education
int Percent(char gender[],char edu[],int n) 
{
	int count = 0,percent;
	for(int i = 0;i < n;i++)
	{
		if((toupper(gender[i]) == 'M') && (toupper(edu[i]) == 'T'))
		{
			count++;
		}
		percent = count * 100 / n;
	}
	return percent;
}
// Brings Average of all ages in a list
float MesosOros(int age[],int n) 
{
	float mo,sum;
	for(int i = 0;i < n;i++)
	{
		sum += age[i];
	}
	mo = sum / n;
	return mo;
}
// Brings ID of Max Age
int MaxId(int age[],int id[],int n)  
{
	int max = 0, x;
	for(int i = 0;i < n;i++)
	{
		if(age[i] > max)
		{
			max = age[i];
			x = id[i];
		}
	}
	return x;
}
// Brings ID of Min Age
int MinId(int age[],int id[],int n) 
{
	int min = 120,x;
	for(int i = 0;i < n;i++)
	{
		if(age[i] < min)
		{
			min = age[i];
			x = id[i];
		}
	}
	return x;
}
// Checks if input of Age is between the values we want
int CheckAge(int *n) 
{		
	while((*n < 0) || (*n > 120))
	{
		printf("Insert Age again please : ");
		scanf(" %d", n);
	}
	return *n;
}
// Checks that input of Gender is correct
char CheckGender(char *n) 
{
	while((toupper(*n) != 'F') && (toupper(*n) != 'M'))
	{
		printf("Insert Gender again please : ");
		scanf(" %c", n);
	}
	return *n;
}
// Checks if input of Studies is correct
char CheckStudies(char *n) 
{
	while((toupper(*n) != 'P') && (toupper(*n) != 'D') && (toupper(*n) != 'T'))
	{
		printf("Insert level of studies again please : ");
		scanf(" %c", n);
	}
	return *n;
}
// Prints results of Max,Min ID,percent of Males with Higher Education and Average of all Ages
void Results(int id[], int age[], char gender[], char edu[],int n) 
{
	FILE *info_final = fopen("info_final.txt", "a");
	fprintf(info_final,"Max age id is : %d\n", MaxId(age,id,n));
	fprintf(info_final,"Min age id is : %d\n", MinId(age,id,n));
	fprintf(info_final,"%d%% of males have higher education\n", Percent(gender,edu,n));
	fprintf(info_final,"Mesos oros hlikiwn einai : %.1f\n", MesosOros(age,n));
	fclose(info_final);
	return;
}
// Sorts all lists (id,age,gender,edu) depending on the Age list
void SortLists(int id[], int age[], char gender[], char edu[],int n) 
{
	clock_t time1, time2;
	int temp,temp1,temp2,temp3,timeresults;
	FILE *data = fopen("data.txt", "w+");
	dater();
	time1 = clock();
	for(int i = 0;i < n-1;i++)
	{
		for(int j = 0;j < n - i - 1;j++)
		{
			if(age[j] > age[j+1])
			{
				temp = age[j];
				temp1 = id[j];
				temp2 = gender[j];
				temp3 = edu[j];
				age[j] = age[j+1];
				id[j] = id[j+1];
				gender[j] = gender[j+1];
				edu[j] = edu[j+1];
				age[j+1] = temp;
				id[j+1] = temp1;
				gender[j+1] = temp2;
				edu[j+1] = temp3;
			}
		}
	}
	time2 = clock();
	timeresults = time2 - time1;
	hours_timer(timeresults);
	fprintf(data,"ID\tAge\tGender\tEducation\n");
	fprintf(data,"--\t---\t------\t---------\n");
	for(int i = 0;i < n;i++)
	{
		fprintf(data,"%d\t %d\t  %c  \t    \%c    \n",id[i], age[i], toupper(gender[i]), toupper(edu[i])); // Prints all sorted lists on data.txt
	}
	Results(id,age,gender,edu,n);
	fclose(data);
}
// Fills all lists (id,age,gender,edu) with random values
void data(int id[], int age[], char gender[], char edu[],int n) 
{
	for(int i = 0;i < n;i++)
	{
		//printf("Enter your age please : ");
		age[i] = rand() % 120 + 1;
		//scanf(" %d", &age[i]);
		CheckAge(&age[i]);
		//printf("Enter your gender please : ");
		gender[i] = rand() % 2;
		if(gender[i] == 0)
		{
			gender[i] = 'M';
		}
		else
		{
			gender[i] = 'F';
		}
		//scanf(" %c", &gender[i]);
		CheckGender(&gender[i]);
		//printf("Enter your level of studies please : ");
		edu[i] = rand() % 3;
		if(edu[i] == 0)
		{
			edu[i] = 'P';
		}
		else if(edu[i] == 1)
		{
			edu[i] = 'D';
		}
		else
		{
			edu[i] = 'T';
		}
		//scanf(" %c", &edu[i]);
		CheckStudies(&edu[i]);
		id[i] = i + 1;
	}
	SortLists(id,age,gender,edu,n);
}

long int testRec(int size, long int checkNumber,unsigned long int *dayz, int list[])
{
	unsigned long int x;
	if(*dayz > 1000)
	{
		x = checkNumber * (*dayz * 5 * 2);
		dayz++;
		for(int i = 0;i < size;i++)
		{
			return (x % list[i] == 0) ? x : testRec(size,checkNumber,dayz++,list) ;
		}
	}
	return checkNumber * (*dayz);
}
