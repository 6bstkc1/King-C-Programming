/*
* This program asks the user to enter a fraction then it prints out
* the fraction reduced to its lowest terms.
*/

#include <stdio.h>

int main()
{
    int numerator, denominator, rem, num1, num2;

    printf("Enter a fraction:\n");
    scanf("%d/%d",&numerator,&denominator);

    num1 = numerator;
    num2 = denominator;

    while (num1 != 0) {
        rem = num2 % num1;
        num2 = num1;
        num1 = rem;
    }

    printf("GCD is %d\n"i,num2);

    numerator /= num2;
    denominator /= num2;

    printf("In lowest terms: %d/%d\n",numerator,denominator);
    return 0;
}
