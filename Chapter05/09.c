/*
* This program asks the user to input two dates and tells the user which
* one comes earlier.
*/

#include <stdio.h>

int main()
{
    int month1, day1, year1, month2, day2, year2,
    totalDays1, totalDays2;

    printf("Enter first date (mm/dd/yy):\n");
    scanf("%d/%d/%d",&month1,&day1,&year1);

    printf("Enter second date (mm/dd/yy):\n");
    scanf("%d/%d/%d",&month2,&day2,&year2);

    totalDays1 = day1 + month1 * 12 + year1 * 365;
    totalDays2 = day2 + month2 * 12 + year2 * 365;

    if(totalDays1 <= totalDays2)
        printf("%d/%d/%d is earlier than %d/%d/%d\n",month1,day1,year1,month2,day2,year2);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d\n",month2,day2,year2,month1,day1,year1);


    return 0;
}
