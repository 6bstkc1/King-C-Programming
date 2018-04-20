/*
* This program prompts the user to enter an alphabetic phone number
* then it converts it to numeric form.
*/

#include <stdio.h>

int main()
{
    char c;

    printf("Enter phone number: ");

    while((c = getchar()) != '\n') {
        if('A' <= c && c <= 'Z') {
            if(c <= 'C') printf("2");
            else if(c <= 'F') printf("3");
            else if(c <= 'I') printf("4");
            else if(c <= 'L') printf("5");
            else if(c <= 'O') printf("6");
            else if(c <= 'S') printf("7");
            else if(c <= 'V') printf("8");
            else printf("9");
        }
        else
            putchar(c);
    }
    return 0;
}
