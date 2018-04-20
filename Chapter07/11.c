/*
* This program takes in the first and last name inputted and displays the last name, first letter of first name followed by .
* This version stores the last name into an array
*/

#include <stdio.h>

int main()
{
    char last_name[20];
    char first_letter, input_c;
    int i = 0;

    printf("Enter a first and last name: ");

    while((input_c = getchar()) == ' '); // skip over space to find first letter

    first_letter = input_c; // save the first letter

    while((input_c = getchar()) != ' '); // skip rest of first name

    while((input_c = getchar()) == ' '); // skip spaces

    for(last_name[i] = input_c; last_name[i] != ' '; last_name[++i] = getchar())
        if(last_name[i] == '\n') break;

    printf("You entered the name: ");

    for(i = 0; last_name[i] != '\0'; i++) {
        if(last_name[i] == '\n') break;
        printf("%c",last_name[i]);
    }

    printf(", %c.\n",first_letter);
    return 0;
}
