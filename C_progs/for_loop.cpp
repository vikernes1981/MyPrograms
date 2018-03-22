#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int 
main()
{
    int num,max,min,med,sum = 0, counter = 0,i,mo,tries;
    char name[50],maxname[51],minname[52],medname[53];

    printf("How many tries? : ");
    scanf("%i", &tries);

    for( i = 0; i < tries; i++)
    {
        printf("Name? : ");
        scanf("%s", name);
        printf("Enter num : ");
        scanf("%i", &num);
        sum += num;

        if(i == 0)
        {
            med = num;
            max = num;
            min = num;
            strcpy(medname,name);
            strcpy(maxname,name);
            strcpy(minname,name);
        }
        if(num > max)
        {
            max = num;
            strcpy(maxname,name);
        }
        if(num < min)
        {
            min = num;
            strcpy(minname,name);
        }
        if((num < max) && (num > min))
        {
            med = num;
            strcpy(medname,name);
        }
        if(num == 5)
        {
            counter++;
        }
    }
    mo = sum / tries;
    if(tries > 3)
    {
        med = mo;
    }
    printf("Max number is %i (%s) ,med number is %i (%s) and min number is %i (%s).\n", max,
     maxname, med, medname, min, minname);
    printf("You pushed 5 %i times! sum is %i ,mo is %i\n", counter, sum, mo);
}