/*
*   This program determines how many digits there are from an inputted number.
*/

#include <stdio.h>

int count; /* Set to 0 */

int main()
{
    int number; /* Assumed to be positive or 0 */

    printf("Enter a number:\n");
    scanf("%d",&number);

    if(number < 9) count = 1;
    else if(number > 9 && number < 99) count = 2;
    else if(number > 99 && number < 999) count = 3;
    else count = 4;

    printf("The number %d has %d digits\n",number,count);

    return 0;
}
