/*
* This program asks the user for a 24 hour time,
* then displays the time in 12 hour form.
*/

#include <stdio.h>

int main()
{
    int hours, mins;

    printf("Enter a 24-hour time\n");
    scanf("%d:%d",&hours,&mins);

    if(hours > 12) hours -= 12;

    printf("Equivalent to the twelve hour time: %d:%.2d\n",hours,mins);

    return 0;
}
