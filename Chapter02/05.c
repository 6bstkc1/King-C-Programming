/*
* This program prompts the user to enter a number x
* then it uses to solve the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
*/

#include <stdio.h>

int main()
{
    int x;
    int solution;

    printf("Enter a value for x: ");
    scanf("%d",&x);

    solution = (3 * x * x * x * x * x)
    + (2 * x * x * x * x)
    - (5 * x * x * x)
    - (x * x)
    - (7 * x)
    - 6;

    printf("The solution is %d.",solution);

    return 0;
}
