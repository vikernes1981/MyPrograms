#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100000],minum,minpos;

    for(int i = 0;i < 100000;i++)
    {
        array[i] = rand() % 12000;
    }
/*    for(int i = 0;i < 119;i++)
    {
        printf("%i\n\n", array[i]);
    }*/

    for(int i = 0;i < 100000;i++)
    {
        minum = i;
        minpos = array[i];

        for(int j = i + 1;j < 100000;j++)
        {
            if(array[j] < array[minum])
            {
                minum = j;
                minpos = array[j];
            }
        }

        array[minum] = array[i];
        array[i] = minpos;
    }
    for(int i = 0;i < 100000;i++)
    {
        printf("%i\n", array[i]);
    }
}