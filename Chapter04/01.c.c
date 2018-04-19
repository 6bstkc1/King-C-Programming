/*
* This program asks the user to enter a two digit number then prints out the reverse of it.
*/

#include <stdio.h>

int main()
{
    int num, firstDig, secondDig;

    printf("Enter a two-digit number:\n");
    scanf("%d",&num);

    firstDig = num / 10;
    secondDig = num % 10;

    printf("The reversal is: %d%d\n",secondDig,firstDig);

    return 0;
}
