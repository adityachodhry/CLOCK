// CLOCK
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    // Declaring required variables
    int hour, minute, seconds;

    printf("Enter Hour:\n ");
    scanf("%d", &hour);

    printf("Enter Minute:\n ");
    scanf("%d", &minute);

    printf("Enter Seconds:\n ");
    scanf("%d", &seconds);

    while (seconds <= 60)
    {
        if (seconds < 59)
        {
            seconds++;
        }
        else
        {
            minute++;
            seconds = 0;
        }
        if (minute == 60)
        {
            minute = 0;
            ++hour;
        }
        if (hour == 24)
        {
            seconds = 0;
            minute = 0;
            hour = 0;
        }

        printf(" Time            %d : %d : %d", hour, minute, seconds);
        sleep(1);
        system("cls");
    }
}