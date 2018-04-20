/*
* Checks numbers for reported digits and prints repeating digits.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10] = {false};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld",&n);

    printf("Repeated digits:");

    while(n > 0) {
        digit = n % 10;
        if(digit_seen[digit])
            printf(" %d",digit);
        digit_seen[digit] = true;
        n /= 10;
    }

    return 0;
}
