#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //user input
    int number;
    do
    {
        printf("Give me a number from 1 to 23:\n");
        number = GetInt();
    }
    while (number < 0 || number > 23);
    
    //pyramid 
    for (int i = 0; i < number; i++)
    {
        for (int space = 0; space < number - i - 1; space++)// spaces of 1st pyramid
        {
            printf(" ");
        }
        
        for (int hash = 0; hash < i + 1; hash++)// hashtag of 1st pyramid
        {
            printf("#");
        }
        printf("  ");// space between pyramid
        
        for (int hash = 0; hash < i + 1; hash++)// hashtag of 2nd pyramid
        {
            printf("#");
        }
        printf("\n");
    }
}
