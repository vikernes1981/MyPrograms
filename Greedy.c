//to do: prompt user for amount of change in dollars / get_float 
//       do-while loop?(while should be invalid),accept only positive
//       use largest coin possible / modulo or while loops
//       keep track of coins used / count
//       print final # of coins used / printf count
//       convert value to cents 1 = 100 /float f = 0.1; printf("%.55f\n", f);
//       round the numbers / printf("%.2f\n", round(4.7));
//       convert float to int


#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int change_counter = 0;
    
    do
    {
    printf("Hello there,how much change do I owe you?\n");
    change = get_float();
    change = change * 100;
    }
    while(change < 0);
    int rchange = round(change); // changing float to integer and rounding it
    
    //quarters
    while (rchange >= 25)
    {
        change_counter++;
        rchange -= 25;

    }
    //dimes
    while (rchange < 25 && rchange >= 10)
    {
        change_counter++;
        rchange -= 10;
    }
    
    //nickels
    while (rchange < 10 && rchange >= 5)
    {
        change_counter++;
        rchange -= 5;
    }
    
    //pennies
    while (rchange < 5 && rchange >= 1)
    {
        change_counter++;
        rchange -= 1;
    }
    printf("%d\n", change_counter);//prints sum of change
}
