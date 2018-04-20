/*
* This program calculates an approximate value of e where e = 1/1! + 1/2! ... + 1/i!
* by asking the user for a small floating point number and stops when the number is less than 1/i!
*/

#include <stdio.h>

int main()
{
    float e, f_num;
    int i, mult;

    printf("Enter a small floating point value: ");
    scanf("%f",&f_num);

    e = 1.00f;
    mult = 1;
    i = 1;

    while(1.00f/i > f_num) {
        mult *= i;
        e += 1.00f/mult;
        i++;
    }

    printf("Value %f is less than %f\n",1.00f/i,f_num);
    printf("e approximated to %d values is: %f",i,e);

    return 0;
}
