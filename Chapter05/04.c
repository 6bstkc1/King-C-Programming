/*
* This program asks for the user to enter a wind speed and
* then displays the correct corresponding description.
*/

#include <stdio.h>

int main()
{
    int windSpeed;

    printf("Enter wind speed:\n");
    scanf("%d",&windSpeed);

    if(windSpeed < 1)
        printf("Calm\n");
    else if(windSpeed < 4)
        printf("Light Air\n");
    else if(windSpeed < 28)
        printf("Breeze\n");
    else if(windSpeed < 48)
        printf("Gale\n");
    else if(windSpeed < 63)
        printf("Storm\n");
    else
        printf("Hurricane");

    return 0;
}
