/*
* This program asks the user to enter two numbers then displays the GCD
* of the numbers.
*/

#include <stdio.h>

int main()
{
    int num1, num2, remainder; // num1 is n num2 is m

    printf("Enter two integers:\n");
    scanf("%d%d",&num1,&num2);

    while (num1 != 0) {
        remainder = num2 % num1;
        num2 = num1;
        num1 = remainder;
    }

    printf("Greatest Common Divisor: %d\n",num2);

    return 0;
}
