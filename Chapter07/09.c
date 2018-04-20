/*
* This program asks the user for a 12 hour time then it displays it in 24 hour time.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int hours, mins, newHours, newMins;
    int increaser = 0;
    char first;

    printf("Enter a 12 hour time: ");
    scanf("%d:%d",&hours,&mins);

    while((first = getchar()) == ' ');

    first = tolower(first);

    if(first == 'p') increaser = 720; /* 720 mins = 12 hours */

    newMins = mins + (hours * 60) + increaser;
    newHours = newMins / 60;
    newMins %= 60;

    printf("Equivalent 24-hour time: %d:%.2d\n",newHours,newMins);
    return 0;
}
