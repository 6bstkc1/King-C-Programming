/*
* This program prompts the user to enter
* the number of an item, its price and the purchase date.
* Then it prints them out in a specific format.
*/

#include <stdio.h>

int main()
{
    int itemNum, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d",&itemNum);

    printf("Enter unit price: ");
    scanf("%f",&price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$ %.2f\t\t%d/%d/%d",itemNum,price,month,day,year); /* extra long line */

    return 0;
}
