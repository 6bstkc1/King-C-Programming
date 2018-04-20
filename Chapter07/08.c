/*
* This program takes a time from the user and
* then displays the departure and arrival time
* for the flight whose departure time is the closest
* to that entered by the user.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int hours, mins, inMins;
    int increaser = 0;
    char first, second;

    printf("Enter a 12 hour time: ");
    scanf("%d:%d",&hours,&mins);

    while((first = getchar()) == ' ');

    first = tolower(first);

    if(first == 'p') increaser = 720; /* 720 mins = 12 hours */

    inMins = mins + (hours * 60) + increaser;

    printf("In mins %d\n",inMins);

    /* 8:00 is 460
     * 9:43 is 583
     * 11:19 is 637
     * 12:47 is 767
     * 2:00 is 840
     * 3:45 is 945
     * 7:00 is 1140
     * 9:45 is 1305
     */

    if(inMins <= 521.5f)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if(inMins <= 610)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if(inMins <= 702)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if(inMins <= 803.5f)
        printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.\n");
    else if(inMins <= 892.5f)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if(inMins <= 1024.5f)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if(inMins <= 1222.5f)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}
