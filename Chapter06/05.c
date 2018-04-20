/*
* This program prompts the user for a number then reverses the digits with a loop
*/

#include <stdio.h>

int main()
{
    int num;
    int revNum = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
        revNum *= 10;
        revNum += num % 10;
        num /= 10;
    } while(num != 0);

    printf("Reverse is: %d",revNum);
    return 0;
}
