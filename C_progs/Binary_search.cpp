#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[20];
    char search;
    int start,end,middle,flag = 0,temp;
    start = 0;
    end = 20;
    middle = (start + end) / 2;

    for(int i = 0;i < 20;i++)
    {
        array[i] = 'A' + rand() % 26;
    }

    printf("Give num to search : ");
    scanf(" %c", &search);

    for(int i = 0;i < 19;i++)
    {
        for(int j = 0;j < 19 - i;j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    while(start <= end)
    {
        if(array[middle] < search)
        {
            start = middle + 1;
            middle = (start + end) / 2;
        }
        else if(array[middle] > search)
        {
            end = middle - 1;
            middle = (start + end) / 2;
        }
        else
        {
            printf("'%c' was found!\n", search);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("'%c' not found!\n", search);
    }

}
