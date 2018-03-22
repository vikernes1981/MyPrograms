#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
 * Ftiaxnei mia 2d lista me noumera kai 
 * pernei to summary apo tous arithmous
 *  tou styl :  234
 * 				 3
 * 				345
 * .Vgazei to megalytero summary apo ola.
 * Enw einai 6x6 h lista vgainoun 16 'Hourglasses'
 * To programma kanei output to megalytero summary 
 * tou hourglass.
 */

int main(){
    int arr[6][6];
    int sum1 = 0, sum = 0,count = 0,count1 = 0, maxneg = -1000,count2 = 0;
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    // xwrizei thn lista se 4x4 hourglasses tou 3x3
    for(int x = 0;x < 4;x++)
    {
        for(int y = 0;y < 4;y++)
        {
            for(int i = 0;i < 3;i++) // edw einai ta hourglasses 3x3
            {
               for(int j = 0;j < 3;j++)
               {
                   sum += arr[i+x][j+y];
               }
            }
            // sum tou kathe hourglasses
            count1 += (arr[x+1][y]) + (arr[x+1][y+2]);
            sum -= (count1);

            if((sum > count) && (sum > 0))
            {
                count = sum;
                sum = 0;
            }
            if(sum <= 0)
            {
                if(sum > maxneg)
                {
                    maxneg = sum;
                    count2 = maxneg;
                    sum = 0;
                }
            }
            sum = 0;
            count1 = 0;
        }
    }
    for(int i = 0;i < 6;i++)
    {
        for(int j = 0;j < 6;j++)
        {
            sum1 += arr[i][j];
            
        }
    }
    if(sum1 < 0)
    {
        printf("%i", count2);
    }
    else
    {
        printf("%i", count);
    }
    return 0;
}
