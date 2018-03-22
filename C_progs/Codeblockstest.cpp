#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[67];
    printf("Hello CodeBlocks!! Name?\n");
    scanf("%s", &name);

    printf("Welcome %s!!\n", name);
    for(int i = 0;i<10;i++)
    {
        printf("%i\n", i);
    }
}
