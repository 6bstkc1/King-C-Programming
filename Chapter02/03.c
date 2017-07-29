/*
* This program calculates the volume of a sphere
* with the radius entered by the user.
*/

#include <stdio.h>

#define PI 3.14f
#define FOUR_THIRDS (4.0f/3.0f)

int main()
{
    int radius;
    float volume;

    printf("Enter radius: ");
    scanf("%d",&radius);

    volume = FOUR_THIRDS * PI * radius * radius * radius; /* calc volume */

    printf("The volume of the sphere is %f.",volume);
    return 0;
}
