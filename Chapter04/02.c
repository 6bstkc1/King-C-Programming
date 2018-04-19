/*
* This program asks the user to enter a three digit number then prints out the reverse of it.
*/

#include <stdio.h>

int main()
{
    int firstDig, secondDig, thirdDig;

    printf("Enter a three-digit number:\n");

    scanf("%1d",&firstDig);
    scanf("%1d",&secondDig);
    scanf("%1d",&thirdDig);

    printf("The reversal is: %d%d%d\n",thirdDig,secondDig,firstDig);

    return 0;
}
