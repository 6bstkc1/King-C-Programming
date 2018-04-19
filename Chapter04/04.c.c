/*
* This program takes the input of a number in the range of 0 - 32767
* and displays it in octal.
*/

#include <stdio.h>

int main()
{
    int num, dig1, dig2, dig3, dig4;

    printf("Enter a number between 0 and 32767:\n");
    scanf("%d",&num);
    dig1 = num % 8;
    num /= 8;
    dig2 = num % 8;
    num /= 8;
    dig3 = num % 8;
    num /= 8;
    dig4 = num % 8;
    num /= 8;

    printf("%d%d%d%d%d\n",num,dig4,dig3,dig2,dig1);

    return 0;
}
