/*
* This program asks for the user to enter integers until a 0 is entered
* then it prints out the greatest number.
*/

#include <stdio.h>

int main()
{
    int num;
    int greatest = 0;

    while(num != 0) {
        printf("Enter a number:\n");
        scanf("%d",&num);
        if(num > greatest)
        {
            greatest = num;
        }
    }
    printf("The largest number entered was %d\n",greatest);
    return 0;
}
