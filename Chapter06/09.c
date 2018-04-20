/*
* This program calculates the balance of a loan. It prompts the user to enter the number of payments.
*/

#include <stdio.h>

int main()
{
    int i, num_of_payments;
    float loan_amount, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f",&loan_amount);

    printf("Enter interest rate: ");
    scanf("%f",&interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f",&monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d",&num_of_payments);

    for(i = 1; i <= num_of_payments; i++) {
        loan_amount = (loan_amount - monthly_payment) + (loan_amount * ((interest_rate / 100)/12));
        printf("Balance remaining after %d months: %.2f\n",i,loan_amount);
    }
    return 0;
}
