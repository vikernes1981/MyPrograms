#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num,timeresult;
    clock_t time1,time2;

    printf("Poso kanei 5 + 5\n");
    time1 = clock();
    scanf(" %d", &num);
    time2 = clock();

    timeresult = (int)time2 - (int)time1;

    if(num == 10)
    {
        printf("Bravo!");
        printf("It took you %d seconds to answer!",timeresult / 1000);
    }
    else
    {
        printf("Ton hpies!");
        printf("It took you %d seconds to answer!",timeresult / 1000);
    }
}
