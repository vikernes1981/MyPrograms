#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char adminName[51], adminPass[50],
    userName[52],userPass[53];

    printf("Enter Admin Name : ");
    scanf("%s", adminName);
    printf("Enter Admin Pass : ");  
    scanf("%s", adminPass);

    printf("Please enter your User Name : ");
    scanf("%s", userName);
    printf("Please enter your User Pass : ");
    scanf("%s", userPass);

    if((strcmp(adminName,userName) == 0) && (strcmp(adminPass,userPass) == 0))
    {
        printf("Welcome Administrator!\n");
    }
    else if((strcmp(adminName,userName) != 0))
    {
        printf("Username is wrong!Try again.\n");
    }
    else if((strcmp(adminPass,userPass) != 0))
    {
        printf("Password is wrong!Try again.\n");
    }

}