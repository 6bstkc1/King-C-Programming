/*
* This program evaluates on an expression entered by the user evauleted left to right with no operator precedence.
*/

#include <stdio.h>

int main()
{
    float num1,num2;
    char op;

    printf("Enter an expression: ");
    scanf("%f",&num2);

    while((op = getchar()) != '\n'){
        scanf("%f",&num1);
        switch(op) {
            case '/' :
                num2 /= num1;
                break;
            case '*' :
                num2 *= num1;
                break;
            case '+' :
                num2 += num1;
                break;
            case '-' :
                num2 -= num1;
                break;
        }
    }

    printf("Value of expression %.2f",num2);
    return 0;
}


