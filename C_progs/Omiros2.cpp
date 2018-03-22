#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, max, min, sum = 0;

    for(int i = 0;i < 5;i++)
    {
        printf("Give me a num please  : ");
        scanf("%i", &num);

        if(i == 0)
        {
            max = num;
            min = num;
        }
        if(num > max)
        {
            max = num;
        }
        if(num < min)
        {
            min = num;
        }
        sum += num;
    }
    printf("Max number is %d and Min number is %d\nSum of all numbers is %d\n", max, min, sum);
}