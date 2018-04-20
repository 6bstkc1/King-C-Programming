/*
* Checks numbers for reported digits. Ends when user enters a 0.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10];
    int digit, i;
    long input, n;

    printf("Enter numbers: ");

    while(scanf("%ld",&input) == 1) {
       if(input == 0)
            break;
       else {
            for(i = 0; i < 10; i++)
                digit_seen[i] = false;
            n = input;
       }

            while(n > 0) {
                digit = n % 10;
                if(digit_seen[digit])
                    break;
                digit_seen[digit] = true;
                n /= 10;
            }

        if(n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");
    }

    return 0;
}
