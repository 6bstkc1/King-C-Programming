/*
* This program prompts the user to enter the number of entries on
* a square table. Every 24 squares it prompts the user to continue.
*/

#include <stdio.h>

int main()
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries on the table: ");
    scanf("%d",&n);
    getchar(); /* Very important line: Removes \n after scanf() */

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
        if(i % 24 == 0) {
            printf("Press enter to continue...");
            getchar();
        }
    }
    return 0;
}
