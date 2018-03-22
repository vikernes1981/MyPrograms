#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


//string conv_to_list[];
int main(void)
{
    string name;
    
    name = get_string(); //gets user input
    printf("%c", toupper(name[0]));  // converts first initial to capital
    if (name != NULL)
    {
        
        for(int i = 0, n = strlen(name); i < n; i++)
        {
            if(name[i] == ' ') //checks for spaces and prints initial after space
            {
                printf("%c", toupper(name[i+1]));
            }
        }
        printf("\n"); // creates new line for the aesthetics
    }    
}
