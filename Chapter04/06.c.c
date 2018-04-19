/*
* This program computes the EAN check digit.
*/

#include <stdio.h>

int main()
{
    int dig1,dig2,dig3,dig4,dig5,dig6,dig7,dig8,dig9,dig10,dig11,dig12,
    sum1, sum2, total;

    printf("Enter the first 12 digits of an EAN:\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&dig1,&dig2,&dig3,&dig4,&dig5,&dig6,&dig7,&dig8,&dig9,&dig10,&dig11,&dig12);

    sum1 = dig1 + dig3 + dig5 + dig7 + dig9 + dig11;
    /* printf("sum1 = %d\n",sum1); */
    sum2 = dig2 + dig4 + dig6 + dig8 + dig10 + dig12;
    /* printf("sum2 = %d\n",sum2); */
    total = 3 * sum2 + sum1;
    /*printf("total = %d\n",total); */

    printf("Check digit: %d\n", 9 - (total - 1) % 10);

    return 0;
}
