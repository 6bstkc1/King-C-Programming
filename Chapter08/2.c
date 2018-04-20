/*
* Checks numbers for reported digits and prints repeating digits.
* Prints a table containing the exact number of times a digit appears.
*/

#include <stdio.h>

int main()
{
    int amount_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld",&n);

    while(n > 0) {
        digit = n % 10;
        if(amount_seen[digit] > 0)
            amount_seen[digit]++;
        else
            amount_seen[digit] = 1;
        n /= 10;
    }

    printf("Digit:       0  1  2  3  4  5  6  7  8  9 \n");
    printf("Occurrences: %d  %d  %d  %d  %d",amount_seen[0],amount_seen[1],amount_seen[2],amount_seen[3],amount_seen[4]);
    printf("  %d  %d  %d  %d  %d",amount_seen[5],amount_seen[6],amount_seen[7],amount_seen[8],amount_seen[9]);

    return 0;
}
