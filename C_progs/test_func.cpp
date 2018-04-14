#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b);

int
main()
{
    int a;
    int b;
    int c;

    
    printf("Give a num : ");
    scanf("%i", &a);
    printf("Give another num : ");
    scanf("%i", &b);

    c = max(a,b);
    printf("%i\n", c);
}

int max(int a, int b)
{
    int result;
    result = a * b;
    return result;
}