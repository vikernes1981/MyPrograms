#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int age;
    char name[50], surname[51], gender;

    printf("Dwse name : ");
    scanf("%s", name);
    printf("Dwse surname : ");
    scanf("%s", surname);
    printf("Dwse gender : ");
    scanf(" %c", &gender);
    printf("Dwse age : ");
    scanf("%i", &age);

    if(gender == 'm')
    {
        printf("To onoma sou einai %s %s!\n", name, surname);

        if(age > 18)
        {
            printf("Prepei na pas fantaros.\n");
        }
    }
    else if(gender == 'f')
    {
        printf("Hello there beautiful!!!\n");
    }
}