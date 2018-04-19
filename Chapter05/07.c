/*
* This program takes in four integer inputs and finds the
* largest and smallest within them.
*/

#include <stdio.h>

int main()
{
    int one, two, three, four,
    min, max, min2, max2;

    printf("Enter four integers:\n");
    scanf("%d%d%d%d",&one,&two,&three,&four);

    if(one > two) {
        max = one;
        min = two;
    }
    else {
        max = two;
        min = one;
    }
    if(three > four) {
        max2 = three;
        min2 = four;
    }
    else {
        max2 = four;
        min2 = three;
    }

    if(max2 > max)
        max = max2;

    if(min2 < min)
        min = min2;

    printf("Largest: %d\n",max);
    printf("Smallest: %d\n",min);

    return 0;
}
