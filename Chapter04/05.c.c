/*
* This program computes the universal product code check digit
*/

#include <stdlib.h>

int main()
{
    int dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9,dig10,dig11,
    sum1, sum2, total;

    printf("Enter the first 11 digits of a UPC:\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&dig1,&dig2,&dig3,&dig4,&dig5,&dig6,&dig7,&dig8,&dig9,&dig10,&dig11);

    sum1 = dig1 + dig3 + dig5 + dig7 + dig9 + dig11;
    sum2 = dig2 + dig4 + dig6 + dig8 + dig10;
    total = 3 * sum1 + sum2;

    printf("Check digit: %d\n",9 - (total - 1) % 10);

    return 0;
}
