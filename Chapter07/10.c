/*
* This program counts the amount of vowels in a string.
*/

#include <stdio.h>

int main()
{
    int count = 0;
    char c;

    printf("Enter a sentence: ");

    while((c = getchar()) != '.')
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;

    printf("Your sentence contains %d vowels.\n",count);
    return 0;
}
