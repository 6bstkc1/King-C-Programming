/*
* This program prompts the user to enter a telephone number then represents it.
*/

#include <stdio.h>

int main()
{
    int first, second, third;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&first,&second,&third);

    printf("You entered %d.%d.%d",first,second,third);

    return 0;
}
