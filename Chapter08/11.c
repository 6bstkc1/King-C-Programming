/*
* This program prompts the user to enter an alphabetic phone number
* then it converts it to numeric form.
*/

#include <stdio.h>

int main()
{
    char phone_num[14];
    char c;
    int i;

    printf("Enter phone number: ");

    for(i = 0; i < 14; i++) {
        phone_num[i] = getchar();
    }

    for(i = 0,c = phone_num[i]; i < 15; c = phone_num[i+1],i++) {
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
