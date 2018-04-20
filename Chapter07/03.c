/*
* This program asks the user for double numbers adding them all together
* and printing the sum.
*/

#include <stdio.h>

int main()
{
    double num, sum = 0.0f;

    printf("This program sums a series of doubles.\n");
    printf("Enter doubles (0 to terminate): ");
    scanf("%ld",&num);

    while(num != 0.0f) {
        sum += num;
        scanf("%ld",&num);
    }

    printf("The sum is %ld\n",sum);
    return 0;
}
