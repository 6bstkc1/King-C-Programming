/*
* This program calculates the remaining balance of a loan after the
* first second and third monthly payments.
* Prompts the user to enter the amount of the loan, the interest rate and the
* monthly payment rate.
*/

#include <stdio.h>

int main()
{
    float loanAmount;
    float interestRate;
    float monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f",&loanAmount);

    printf("Enter interest rate: ");
    scanf("%f",&interestRate);

    printf("Enter monthly payment: ");
    scanf("%f",&monthlyPayment);

    loanAmount = (loanAmount - monthlyPayment) + loanAmount * ((interestRate * .01) / 12); /* first month */

    printf("\nBalance remaining after first payment: %.2f\n",loanAmount);

    loanAmount = (loanAmount - monthlyPayment) + loanAmount * ((interestRate * .01) / 12); /* second month */

    printf("Balance remaining after second payment: %.2f\n",loanAmount);

    loanAmount = (loanAmount - monthlyPayment) + loanAmount * ((interestRate * .01) / 12); /* third month */

    printf("Balance remaining after third payment: %.2f",loanAmount);

    return 0;
}
