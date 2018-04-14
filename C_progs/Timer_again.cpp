#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hours_timer(clock_t timer)
{
    int sec = timer / 1000;
    int hours,minutes,seconds;
    
    if(sec <= 60)
    {
       printf("It took you %d seconds to answer!",sec);
    }
    else if((seconds > 60) && (seconds <= 3600))
    {
        minutes = sec % 60;
        seconds = sec / 60;
        printf("It took you %d minute and %d seconds to finish!",minutes, seconds);
    }
    else
    {
        hours = sec / 3600;
        minutes = sec % 3600;
        seconds = minutes / 60;
        printf("It took you %d hours %d minutes and %d seconds", hours, minutes, seconds);
    }
}


int main()
{
    int num,timeresult;
    clock_t time1,time2;
    
    printf("Poso kanei 5 + 5\n");
    time1 = clock();
    scanf(" %d", &num);
    time2 = clock();
    
    timeresult = time2 - time1;
    
    if(num == 10)
    {
        printf("Bravo!");
        hours_timer(timeresult);
    }
    else
    {
        printf("Ton hpies!");
        hours_timer(timeresult);
    }
}
