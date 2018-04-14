#include <stdio.h>
#include <time.h>

void find_primes(int x)
{
	bool flag = true;
    if(x == 2)
    {
        flag = true;
    }
    if(x % 2 == 0)
    {
        flag = false;
    }
    else
    {
        for(int i = 3;i <= x / 2;i += 2)
        {
            if(x % i == 0)
            {
                flag = false;
                break;
            }
        }
    }
    if(flag)
    {
        printf("Your number is prime!");
    }
    else
    {
        printf("Your number is not prime!");
    }
    return;
}

void dater()
{
	time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);
    FILE *timer = fopen("timer.txt", "w+");
    c_time_string = ctime(&current_time);
    fprintf(timer,"Program started at %s", c_time_string);
    fclose(timer);
    return;
}


void hours_timer(clock_t timer1)
{
    int sec = timer1 / 1000000;
    int hours,minutes,seconds;
    time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);
    FILE *timer = fopen("timer.txt", "a");
    c_time_string = ctime(&current_time);
	
    if(sec <= 60)
    {
        fprintf(timer, "\nIt took you %d seconds to get all your results!\n\nProgram ended at %s",sec, c_time_string);
    }
    else if((sec > 60) && (sec <= 3600))
    {
        minutes = sec / 60;
        seconds = sec % 60;
        fprintf(timer, "\nIt took you %d minutes and %d seconds to get all your results!\n\nProgram ended at %s", minutes, seconds,c_time_string);
    }
    else
    {
        hours = sec / 3600;
        minutes = sec % 60;
        seconds = minutes / 60;
        fprintf(timer, "\nIt took you %d hours %d minutes and %d seconds to get all your results!\n\nProgram ended at %s", hours, minutes, seconds,c_time_string);
    }

    fclose(timer);
    return;
}

int main()
{
    int count, num, timeresult, count1 = 0;
    clock_t time1, time2;
    FILE *results = fopen("Results.txt", "w");


    printf("Give a number : ");
    scanf("%i", &num);
    dater();
	time1 = clock();

    for(int i = 2; i <= num ; i++)
    {
        count = 0;
        for(int j = 2; j <= i / 2;j++)
        {
            if(i % j == 0)
            {
                count = 1;
                break;
            }
        }

/*        if(num % i == 0)
        {
            count1++;
        }
*/
        if(count == 0 && num != 1)
        {
            fprintf(results, "%i\n", i);
            count1++;
        }
    }
    time2 = clock();
    timeresult = time2 - time1;
	hours_timer(timeresult);
	fclose(results);
	find_primes(num);
	printf("\nYou found %d prime numbers!", count1);
}
