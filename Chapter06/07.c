/*
* This program prompts the user to enter the number of entries on
* a square table.
*/

#include <stdio.h>

int main()
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries on the table: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}
