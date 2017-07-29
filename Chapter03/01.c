/*
* This program prompts the user to enter a date in the form mm/dd/yyyy.
* Then the program prints out the date in the form of yyyymmdd .
*/

#include <stdio.h>

int main()
{
    int month, day, year;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month,&day,&year);
    printf("%d%.2d%.2d",year,month,day);
}
