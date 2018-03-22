#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //user input
    printf("Minutes: ");
    int minutes = GetInt();
    
    //calculator
    if (minutes > 0 && minutes <= 30)
    {
        int oz = minutes * 128;
        int water = (minutes * 1.5) * 128 / 16;
        printf("For %d minutes of shower you are using %d bottles of water! \n", minutes, water);
        printf("That's about %d oz!!! \n", oz);
    }
    else if (minutes > 30)
    {
        printf("Are you serious??? \n");
        printf("Try shower a bit less! \n");
    }
    else
    {
        if (minutes <= 0)
        
        printf("I don't think so :P \n");
    }
}
