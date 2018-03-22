// TO DO:
//User input / use get_long_long / make sure its positive
//multiply every other digit / every two digits * 2
//sum those digits
//add to remaining digits / add sum to remaining digits
//validate checksum / last number of sum must be 0
//validate company's identifier
//validate number's length

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    long long cc_number;
    do
    {
        printf("Enter the number of your credit card please : \n");
        cc_number = get_long_long();
    }
    while(cc_number < 0);
    printf("%lld\n", cc_number);
}
