// TO DO
// get key // command line args
// get text to encrypt / get_string
// encrypt text
// print encrypted text


#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[2])
{
    string plain_text;
    
    if(argc == 2)//checks if args are 2
    {
        int key_number = atoi(argv[1]); //turns string arg to integer
        
        printf("plaintext:"); //write your text here
        plain_text = get_string();
        printf("ciphertext:"); //output of ciphered text
        for(int i = 0, n = strlen(plain_text); i < n; i++)
        {
            
            if (isalpha(plain_text[i])) //checks for alphabet chars in plaintext
            {
                
                if(isupper(plain_text[i])) //checks for uppercase letters
                {
                    
                    printf("%c", (((plain_text[i] - 65) + key_number) % 26) + 65);//cipher's the uppercase letters
                }
                else if(islower(plain_text[i])) //cheks lowercase letters
                {
                    
                    printf("%c", (((plain_text[i] - 97) + key_number) % 26) + 97);//cipher's lowercase letters
                }
            }
            else
            {
                
                printf("%c", plain_text[i]);//prints all other chars except alphabetic
            }
        }
    }
    else if(argc != 2 || argc <= 0) //cheks if arguments are more or less than 2
    {
        printf("Try it like this : ./caesar 'number'\n"); //error message if more or less than 2 args
        return 1;
    }
    printf("\n");
    return 0;
}
