#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, num;

    printf("Give a number : ");
    scanf("%i", &num);

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
        /*
        if(num % i == 0)
        {
            count++;
        }
        */
        if(count == 0 && num != 1)
        {
            printf("%i\n", i);
        }
    }
}