#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* The more input you give ,the more time the program will need to terminate.
 * Try something like ,in this order, 5 4 3 2 1 and wait until 15 seconds
 * have passed.Then give one more input number.
 * 
 * Made by Jo as a final project at first semester IEK Omiros.
 */

int main()
{
        int msec, pid[100], time_list[100], count = 0, temp3, temp2 = 0;
        int final_times[100], wait_time[100],total_time[100];
        clock_t start,diff;
        float mo, mo1, sum, sum1, sum2;

        int j, temp = 0, msec1, total, remaining, temp1;
        clock_t timer, differ, starting;
//============================================================================================================
//                                 PROGRAM START                                                             |
//============================================================================================================
        printf("The number you give will be the time the whole program will run.\n");
        printf("If the last value you give is passed the time you gave, it won't show at the list.\n");

        start = clock();                            // General clock
        printf("Give time : \n");
        scanf("%i", &temp3);
        sum2 += temp3;                              // Keeping first user input
        do
        {
                timer = clock();                     // Clock for each item in time_list
                printf("How much time you need? : \n");
                scanf("%d", &time_list[count]);
                differ     = clock() - timer;
                msec1      = differ * 1000 / CLOCKS_PER_SEC / 1000;// Item clock end
                starting   = (((clock() - start) * 1000 / CLOCKS_PER_SEC) / 1000);// Total time from program
                pid[count] = count + 1;              // Proccess ID
                for(int i = 0; i < count; i++)
                {
                        j = i;
                        while(j > 0 && time_list[j] < time_list[j-1])
                        {
                                temp = time_list[j];  // Sorting times ( User input )
                                time_list[j] = time_list[j-1];
                                time_list[j-1] = temp;

                                temp2 = pid[j];        // Sorting PID
                                pid[j] = pid[j-1];
                                pid[j-1] = temp2;

                                j--;
                        }
                }
                sum2 += time_list[count];
                count++;                               // Counter
                if(sum2 > starting)
                {
                        printf("Next item on list is :  %i\n", time_list[0]);
                        printf("Current Time : %d\n\n", clock()/1000);
                }
                else if(sum2 < starting)
                {
                        printf("Time is up, last input won't be displayed!\n\n");
                }
        } while(sum2 > starting);

        diff = clock() - start;                        // General Clock End
        msec = diff * 1000 / CLOCKS_PER_SEC / 1000;

        for(int i = pid[count-1]; i < count; i++)     // Getting rid of last input after time limits
        {
                time_list[i] = time_list[i-1];
        }
        for(int i = 0; i < count; i++)
        {
                final_times[i] = time_list[i-1];
                final_times[0] = temp3;                // Implementing first User Input at start of list
        }

        for(int i = 0; i < count; i++)                // Sum waiting time
        {
                wait_time[i+1] = sum += final_times[i];
                total_time[i] = wait_time[i+1];
        }
        for(int i = 0; i < count; i++)                // Sum total time
        {
                sum1 += total_time[i];
        }
        wait_time[0] = 0;
        mo1 = sum / count;                             // Average execution time
        mo  = sum1 / count;                            // Average waiting time
        printf("Pid\tFinal\tWait\tTotal\n");           // Virtual Columns :P
        printf("___\t_____\t____\t_____\n\n");
        for(int i = 0; i < count; i++)                // Final Printout
        {
                printf("%i\t%d\t%d\t%d\n", pid[i-1],final_times[i],wait_time[i],total_time[i]);
        }
        printf("\n%d sec passed, mo execution = %.2f, mo waiting = %.2f \n\n", msec, mo, mo1);
        printf("Count = %i", count);
}
