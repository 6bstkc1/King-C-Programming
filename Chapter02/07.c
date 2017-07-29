/*
* Asks the user to input an integer number of dollars
* Then calculates how to pay that with the smallest number
* of $20 $10 $5 and $1 dollar bills.
*/

#include <stdio.h>

int main()
{
    int dollarNum;
    int twentyNum;
    int tenNum;
    int fiveNum;

    printf("Enter a number of dollars: ");
    scanf("%d",&dollarNum);

    twentyNum = dollarNum / 20; /* Number of Twenties */
    dollarNum = dollarNum % 20;

    tenNum = dollarNum / 10; /* Number of Tens */
    dollarNum = dollarNum % 10;

    fiveNum = dollarNum / 5; /* Number of Fives */
    dollarNum = dollarNum % 5;

    /* At this point dollarNum is the number of Ones */

    printf("$20 bills: %d\n",twentyNum);
    printf("$10 bills: %d\n",tenNum);
    printf("$5 bills: %d\n",fiveNum);
    printf("$1 bills: %d",dollarNum);

    return 0;
}
