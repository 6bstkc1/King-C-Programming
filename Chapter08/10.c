/*
* This program takes a time from the user and
* then displays the departure and arrival time
* for the flight whose departure time is the closest
* to that entered by the user. This version uses two arrays that hold
* the departure times and arrival times.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours, mins, inMins, i, abs_diff, closest_flight;
    int smallest_abs_diff = 1440;
    int departure_times[8] = {460,583,637,767,840,945,1140,1305};
    int arrival_time[8] = {616,712,811,900,968,1075,1280,1438};

    printf("Enter a 24 hour time: ");
    scanf("%d:%d",&hours,&mins);

    inMins = mins + (hours * 60);

    for(i = 0; i < 8; i++) {
        abs_diff = abs(inMins - departure_times[i]);
        if(abs_diff < smallest_abs_diff) {
            smallest_abs_diff = abs_diff;
            closest_flight = i;
        }
        else {
            printf("The closest flight departs at %d:%d, arriving at %d:%d.",
                   departure_times[closest_flight]/60,
                   departure_times[closest_flight]%60,
                   arrival_time[closest_flight]/60,
                   arrival_time[closest_flight]%60);
            break;
        }
    }

    return 0;
}
