/*
* This program prints a one month calender. It prompts the user to enter the number of
* days in a month and the starting day of the week.
*/

#include <stdio.h>

int main()
{
    int days, start, i, j;

    printf("Enter number of days in month: ");
    scanf("%d",&days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d",&start);

    for(i = 0; i < 7 - start; i++)
        printf("   ");

    for(j = 1; j <= days; j++) {
        printf("%2d ",j);
        if(j == start || start == j % 7)
            printf("\n");
    }

    return 0;
}
