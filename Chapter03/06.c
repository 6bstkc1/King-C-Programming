/*
* This program adds two fractions inputed by the user.
*/

#include <stdio.h>

int main()
{
    int num1, dom1, num2, dom2, resultNum, resultDom;

    printf("Enter the fraction equation: ");
    scanf("%d/%d+%d/%d",&num1,&dom1,&num2,&dom2);

    resultNum = (num1 * dom2) + (num2 * dom1);
    resultDom = dom1 * dom2;

    printf("The sum is %d/%d",resultNum,resultDom);

    return 0;
}
