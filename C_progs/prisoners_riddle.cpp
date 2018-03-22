#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0,flag = 0,lamp_state = 0,numbers = 0;
    int array[100];

    for(int i = 0;i < 100; i++)
    {
        array[i] = 0;
    }

    while(counter < 100)
    {
        int random = rand() % 100;
        numbers++; // counter gia to posa noumera vghkan.

// Ayto to block 8a treksei mono mia fora kai 8a anapsei 
// thn lampa.Epishs 8a kanei increase to counter by one.
        if(array[random] == array[0] && flag == 0)
        {
            counter += 1;
            flag = 1;
            lamp_state = 1;
            array[0] = 2;
        }
// Ayto to block 8a trexei kathe fora pou o ari8mos 8a einai array[0]
// aneksarthta apo to state ths lampas kai 8a kanei increase to counter by one.
        if(array[random] == 2 && flag == 1)
        {
            if(lamp_state == 0)
            {
                counter += 1;
                lamp_state = 1;
            }
        }
// Oloi oi alloi ari8moi 8a kleinoun thn lampa.
        if(array[random] != 2 && array[random] == 0)
        {
            lamp_state = 0;
            array[random] = 1;
        }
        if(array[random] == 1)
        {
            lamp_state = 0;
        }
    }
    for(int i = 0;i < 100;i++)
    {
        printf("%i\n", array[i]);
    }
    printf("%d ,Release us...All of us have entered the room!\n", numbers);
}