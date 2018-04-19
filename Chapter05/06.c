/*
* This program computes the universal product code check digit and
* uses an if statement to check if the UPC is valid.
*/

#include <stdlib.h>

int main()
{
    int dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9,dig10,dig11,checkDig,
    sum1, sum2, total, result;

    printf("Enter a UPC:\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&dig1,&dig2,&dig3,&dig4,&dig5,&dig6,&dig7,&dig8,&dig9,&dig10,&dig11,&checkDig);

    sum1 = dig1 + dig3 + dig5 + dig7 + dig9 + dig11;
    sum2 = dig2 + dig4 + dig6 + dig8 + dig10;
    total = 3 * sum1 + sum2;
    result = 9 - (total - 1) % 10;

    if(result == checkDig)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}

