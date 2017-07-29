/*
* This program asks the user to input a number of dollars
* then it calculates the new price with a five percent tax.
*/

#include <stdio.h>

#define TAX .05f

int main()
{
    float dollarNum;
    float totalNum;

    printf("Enter an amount: ");
    scanf("%f",&dollarNum);
    totalNum = dollarNum + dollarNum * TAX ;
    printf("With tax added: %.2f\n",totalNum);
    return 0;
}
