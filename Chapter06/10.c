/*
* This program prompts the user to enter dates until the user enters 0/0/0
* then it prints out the earliest date.
*
* Note: does not work when first date is 0/0/0.
*/

#include <stdio.h>

int main()
{
    int month, day, year, total, early_month, early_day, early_year, early_total;

    while(1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d",&month,&day,&year);

        total = day + (month * 30) + (year * 365);
        early_total = early_day + (early_month * 30) + (early_year * 365);

        if(total == 0)
            break;
        else if(total < early_total) {
            early_year = year;
            early_month = month;
            early_day = day;
        }
    }
    printf("%d/%d/%d is the earliest date\n",early_month,early_day,early_year);
    return 0;
}
