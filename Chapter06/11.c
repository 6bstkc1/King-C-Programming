/*
* This program calculates an approximate value of e where e = 1/1! + 1/2! ... + 1/n!
* n is an integer entered by the user.
*/

#include <stdio.h>

int main()
{
    float e;
    int n, i, mult;

    printf("Enter an n value: ");
    scanf("%d",&n);

    e = 1.00f;
    mult = 1;

    for(i = 1; i <= n; i++) {
        mult *= i;
        e += 1.00f/mult;
    }

    printf("e approximated to %d values is: %f",n,e);

    return 0;
}
