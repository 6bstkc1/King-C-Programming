/*
*  Calculates a two brokers' commissions.
*/

#include <stdio.h>

int main()
{
    int shares;
    float commission, value, r_commission;

    printf("Enter number of shares:\n");
    scanf("%d",&shares);

    printf("Enter price per share:\n");
    scanf("%f",&value);

    value *= shares;

    /* Rival Commission */
    if(shares < 2000)
        r_commission = 33.00f +.03f * shares;
    else
        r_commission = 33.00f + .02f * shares;

    /* Original Commission */
    if(value < 2500.00f)
        commission = 30.00f +.017f * value;
    else if(value < 6250.00f)
        commission = 56.00 +.0066f * value;
    else if(value < 20000.00f)
        commission = 76.00f +.0034f * value;
    else if(value < 50000.00f)
        commission = 100.00f +.0022f * value;
    else if(value < 500000.00f)
        commission = 155.00f +.0011f * value;
    else
        commission = 255.00f +.0009f * value * shares;

    if(commission < 39.00f) commission = 39.00f; /* Original Min Commission */

    printf("Original Broker's Commission: $%.2f\n",commission);
    printf("Rival's Commission: $%.2f\n",r_commission);

    return 0;
}
