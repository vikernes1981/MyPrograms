#include <stdio.h>
#include <stdlib.h>


int func(int x)
{
    return 2 * x;
}

void doublee()
{
    int num, diplasio;

    printf("Give num : ");
    scanf("%i", &num);
    diplasio = func(num);
    printf("%i\n", diplasio);
}

int main()
{
    doublee();
}