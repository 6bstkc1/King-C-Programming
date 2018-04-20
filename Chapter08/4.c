/*
* Reverses a series of numbers. Uses a macro for the size of numbers.
*/

#include <stdio.h>

#define LEN (int) (sizeof(a) / sizeof(a[0]))

int main()
{
    int a[10], i;

    printf("Enter %d numbers: ", LEN);
    for(i = 0; i < LEN; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for(i = LEN - i; i >= 0; i--)
        printf(" %d",a[i]);
    printf("\n");

    return 0;
}
