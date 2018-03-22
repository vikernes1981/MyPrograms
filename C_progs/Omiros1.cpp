#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum;

    printf("Give me a number please : ");
    scanf("%i", &num1);
    printf("Give me one more number please : ");
    scanf("%i", &num2);

    sum = num1 * num2;

    printf("The total of multiplication of your numbers is %d\n", sum);
}