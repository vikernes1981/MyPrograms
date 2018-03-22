#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int counter = 1,ans,tries = 0;

    while(counter <= 5)
    {
        if(counter == 1)
        {
            printf("Mr. Smith has 4 daughters. Each of his daughters has a brother.\n,How many children does Mr. Smith have? : \n");
            scanf("%i", &ans);

            if(ans == 5)
            {
                printf("Well done,you rock!\n");
                counter++;
                tries = 0;
            }
            else if (ans != 5)
            {
                printf("Try again!\n");
                tries++;
                if(tries > 2)
                {
                    printf("YOU SUCK!!\n");
                    tries = 0;
                    break;
                }
            }
        }
        if(counter == 2)
        {
            printf("What number do you get when you multiply all of the numbers on a telephone's number pad? : \n");
            scanf("%i", &ans);

            if(ans == 0)
            {
                printf("Keep it going,you rule!!!\n");
                counter++;
                tries = 0;
            }
            else if(ans != 0)
            {
                printf("Keep trying\n");
                tries++;
            }
            if(tries > 2)
            {
                printf("YOU SUCK MORE!!!\n");
                tries = 0;
                break;
            }
        }
        if(counter == 3)
        {
            printf("If it takes 5 machines 5 minutes to make 5 widgets, how long would it take 100 machines to make 100 widgets? : \n");
            scanf("%i", &ans);

            if(ans == 5)
            {
                printf("Bloodbath!!!\n");
                counter++;
                tries = 0;
            }
            else if(ans != 5)
            {
                printf("You start to get on my nerves you asshole!!\n");
                tries++;
            }
            if(tries > 2)
            {
                printf("HAHAHAHAHAHA, YOU MORON!!!\n");
                tries = 0;
                break;
            }
        }
        if(counter == 4)
        {
            printf("In a lake, there is a patch of lily pads.\nEvery day, the patch doubles in size.\nIf it takes 48 days for the patch to cover the entire lake\nhow long would it take for the patch to cover half the lake? : \n");
            scanf("%i", &ans);

            if(ans == 47)
            {
                printf("GODLIKE!!\n");
                counter++;
                tries = 0;
            }
            else if(ans != 47)
            {
                printf("ZONG!!!\n");
                tries++;
            }
            if(tries > 2)
            {
                printf("Almost there bitch,you failed...\n");
                tries = 0;
                break;
            }
        }
        if(counter == 5)
        {
            printf("There are 2 ducks in front of 2 other ducks.\nThere are 2 ducks behind 2 other ducks.\nThere are 2 ducks beside 2 other ducks.\nHow many ducks are there? : \n");
            scanf("%i", &ans);

            if(ans == 4)
            {
                printf("You WIN!!!!!!\n");
                tries = 0;
                break;
            }
            else if(ans != 4)
            {
                printf("You are almost there!\n");
                tries++;
            }
            if(tries > 2)
            {
                printf("You big loser,you are worthless.FUCK OFF..!!!\n");
                tries = 0;
                break;
            }
        }
    }

}