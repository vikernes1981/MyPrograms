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
    int keyword;
    string key_number = argv[1]; //turns string arg to integer
    
    if(argc == 2)//checks if args are 2
    {
        for(int n = 0, argvlen = strlen(argv[1]); n < argvlen; n++)//error if there are numbers in the keyword  
        {
            if((key_number[n] >= '0') && (key_number[n] <= '9'))
            {
                printf("Try again with no numbers in the word\n");
                return 1;
            }
        }    
        printf("plaintext:"); //write your text here
        plain_text = get_string();
        printf("ciphertext:"); //output of ciphered text
        
        for(int j = 0, i = 0, n = strlen(plain_text);i < n ; j++, i++)// iterates through keyword and plain text
        {
            if(j >= strlen(key_number))// starts iteration of keyword again when is smaller than text
            {
                j = 0;
            }
            if(!isalpha(plain_text[i]))//skips plain text key if its not alphabetic
            {
                j = j - 1;
            }
            keyword = key_number[j];
            if(isupper(keyword))// turns capital keyword key to 0-25
            {
                keyword = keyword - 65;

            }
            if(islower(keyword))// turns lower keyword key to 0-25
            {
                 keyword = keyword - 97;
                 
            }
            
            if (isalpha(plain_text[i])) //checks for alphabet chars in plaintext
            {
                
                if(isupper(plain_text[i])) //checks for uppercase letters
                {
                        
                    printf("%c", (((plain_text[i] - 65) + keyword) % 26) + 65);//cipher's the uppercase letters
                        
                }
                else if(islower(plain_text[i])) //cheks lowercase letters
                {
                        
                    printf("%c", (((plain_text[i] - 97) + keyword) % 26) + 97);//cipher's lowercase letters
                        
                }
            }
            else
            {
                
                printf("%c", plain_text[i]);//prints all other chars except alphabetic
            }
        }
    }
    else if(argc != 2) //cheks if arguments are more or less than 2
    {
        printf("Try it like this : ./vigenere 'word'\n"); //error message if more or less than 2 args
        return 1;
    }
    
    printf("\n");
    return 0;
    
}
